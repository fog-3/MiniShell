/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtins.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:56:40 by fosuna-g          #+#    #+#             */
/*   Updated: 2025/03/06 14:57:45 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

int	ft_isnum(char *str)
{
	int i;
	
	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while(str[i])
	{
		if (!ft_isdigit(str[i++]))
			return (0);
	}
	return (1);
}

void	change_values_env(char *name, char *str, char **env)
{
	int		strlen;
	char	*aux;
	char	*new_env;

	strlen = ft_strlen(name);
	while(*env)
	{
		if (!ft_strncmp(name, *env, strlen) && (*env)[strlen] == '=')
		{
			aux = ft_strjoin2(name, "=");
			new_env = ft_strjoin2(aux, str);
			free(aux);
			*env = new_env;
			//free(aux);
			break;
		}
		env++;
	}
}

void	built_cd(t_cmd *cmd_lst, t_data *data)
{
	int		err;
	char	*actual;
	char	*siguiente;
	
	if (cmd_lst->w_lst->next == NULL)
	{
		actual = my_getenv("PWD", data->env);
		siguiente = my_getenv("HOME", data->env);
		if (!siguiente)
		{
			ft_putstr_fd("cd: HOME not set\n", 2);
			free(actual);
			return;
		}
		err = chdir(siguiente);
		change_values_env("PWD", siguiente, data->env);
		change_values_env("OLDPWD", actual, data->env);
	}
	else
		err = chdir(cmd_lst->w_lst->next->content);
	if (err)
		ft_putstr_fd("Error en chdir\n", 2);
}

void	built_pwd(t_data *data)
{
	char	*buffer;
	
	buffer = my_getenv("PWD", data->env);
	if (buffer != NULL)
        printf("%s\n", buffer);
}

void	built_echo(t_cmd *cmd_lst, t_data *data)
{
	(void)cmd_lst;
	(void)data;
}

void	built_exit(t_cmd *cmd_lst, t_data *data)
{
	int	num;

	ft_putstr_fd("exit\n", 2);
	if (cmd_lst->w_lst->next == NULL)
	{
		write(1, "No hay siguiente\n", 17);
		free_data(data, cmd_lst, 1);
		exit(0);
	}
	else
	{
		if (!ft_isnum((char *)cmd_lst->w_lst->next->content))
		{
			ft_putstr_fd("exit: ", 2);
			ft_putstr_fd((char *)cmd_lst->w_lst->next->content, 2);
			ft_putstr_fd(": number argument required\n", 2);
			free_data(data, cmd_lst, 1);
			exit(2);
		}
		num = ft_atoi(cmd_lst->w_lst->next->content);
		free_data(data, cmd_lst, 1);
		exit(num);
	}
}

void	main_builtin(t_cmd *cmd_lst, t_data *data)
{
	char	*cmd;
	
	if (cmd_lst->w_lst == NULL)
	{
		write(1, "La lista es nula\n", 17);
		free_data(data, cmd_lst, 1);
		exit(-1);
	}
	cmd = cmd_lst->w_lst->content;
	if (!ft_strncmp(cmd, "cd", ft_strlen(cmd)))
		built_cd(cmd_lst, data);
	else if (!ft_strncmp(cmd, "exit", ft_strlen(cmd)))
		built_exit(cmd_lst, data);
	else if (!ft_strncmp(cmd, "echo", ft_strlen(cmd)))
		built_echo(cmd_lst, data);
	else if (!ft_strncmp(cmd, "pwd", ft_strlen(cmd)))
		built_pwd(data);
}
