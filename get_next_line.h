/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garaujo <garaujo@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:02:32 by garaujo           #+#    #+#             */
/*   Updated: 2024/10/09 00:08:53 by garaujo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*append_to_line(char *line, char *buffer);
char	*update_buffer(char *str);
char	*get_next_line(int fd);
int		ft_strlen(const char *str);
#endif
