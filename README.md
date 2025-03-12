# MiniShell

CheckList:
- [ ] echo (only `-n` option) => ft_expand_word problems (I)
- [x] exit
- [x] env (without options and arguments)
- [ ] export (without options)
- [ ] unset (without options)
- [ ] cd => improve it
- [ ] pwd => improve it


(I)
Problems with the ft_expand_word function

Trace:
==2515512== Invalid read of size 1  
==2515512==    at 0x10A16A: ft_expand_word (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x109D5B: ft_args_expand (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x109E3D: ft_expand (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10A651: main (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==  Address 0x4b6b1c1 is 1 bytes inside a block of size 6 free'd  
==2515512==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)  
==2515512==    by 0x109F6D: set_new_word (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10A0A1: ft_expand_var (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10A147: ft_expand_word (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x109D5B: ft_args_expand (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x109E3D: ft_expand (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10A651: main (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==  Block was alloc'd at  
==2515512==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)  
==2515512==    by 0x10BB05: ft_substr (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10A990: add_word_to_list (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10AB1A: add_word (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10AC71: ft_parse (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10A636: main (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==   
==2515512== Invalid read of size 1  
==2515512==    at 0x10A0D1: ft_expand_word (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x109D5B: ft_args_expand (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x109E3D: ft_expand (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10A651: main (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==  Address 0x4b6b1c1 is 1 bytes inside a block of size 6 free'd  
==2515512==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)  
==2515512==    by 0x109F6D: set_new_word (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10A0A1: ft_expand_var (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10A147: ft_expand_word (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x109D5B: ft_args_expand (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x109E3D: ft_expand (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10A651: main (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==  Block was alloc'd at  
==2515512==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)  
==2515512==    by 0x10BB05: ft_substr (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10A990: add_word_to_list (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10AB1A: add_word (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10AC71: ft_parse (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10A636: main (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==   
==2515512== Invalid read of size 1  
==2515512==    at 0x10A0E6: ft_expand_word (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x109D5B: ft_args_expand (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x109E3D: ft_expand (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10A651: main (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==  Address 0x4b6b1c1 is 1 bytes inside a block of size 6 free'd  
==2515512==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)  
==2515512==    by 0x109F6D: set_new_word (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10A0A1: ft_expand_var (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10A147: ft_expand_word (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x109D5B: ft_args_expand (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x109E3D: ft_expand (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10A651: main (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==  Block was alloc'd at  
==2515512==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)  
==2515512==    by 0x10BB05: ft_substr (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10A990: add_word_to_list (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10AB1A: add_word (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10AC71: ft_parse (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10A636: main (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==   
==2515512== Invalid read of size 1  
==2515512==    at 0x10A12A: ft_expand_word (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x109D5B: ft_args_expand (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x109E3D: ft_expand (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10A651: main (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==  Address 0x4b6b1c1 is 1 bytes inside a block of size 6 free'd  
==2515512==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)  
==2515512==    by 0x109F6D: set_new_word (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10A0A1: ft_expand_var (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10A147: ft_expand_word (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x109D5B: ft_args_expand (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x109E3D: ft_expand (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10A651: main (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==  Block was alloc'd at  
==2515512==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)  
==2515512==    by 0x10BB05: ft_substr (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10A990: add_word_to_list (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10AB1A: add_word (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10AC71: ft_parse (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==    by 0x10A636: main (in /home/fosuna-g/Desktop/Fog_miniShell/minishell)  
==2515512==  
