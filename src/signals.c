/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fosuna-g <fosuna-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:22:03 by szapata-          #+#    #+#             */
/*   Updated: 2025/03/11 19:28:26 by fosuna-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

void	handle_ctrl_c(int signal)
{
	(void)signal;
	write(1, "\nMinishell", 1);
	rl_replace_line(" ", 1); // el 1 es clear_undo = 1, un modo para que no podamos dehacer lo escrito en la line (no tenemos que implementarlo en el proyecto)
	rl_on_new_line();
}

void signals(void)
{
	signal(SIGINT, handle_ctrl_c); // Ctrl+C imprime una nueva entrada en una línea nueva.
	signal(SIGQUIT, SIG_IGN); // Ctrl+\ debe ignorarse.
 	signal(SIGTSTP, SIG_IGN); // Ctrl+Z debe ignorarse.
    //Ctrl+D debe cerrar el programa. Pero esto no lo hacemos con las señales porque cuando pulsamos ctrl+d es como si por readline le metieramos Null y entonces el bucle principal del main se cierra.
}
