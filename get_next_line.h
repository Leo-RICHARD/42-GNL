/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 19:16:47 by lrichard          #+#    #+#             */
/*   Updated: 2021/01/26 16:15:49 by lrichard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int			ft_strlen(char *str);
char		*ft_strcat(char *dest, char *src);
int			ft_get_eoli(char *s);
char		*ft_realloc(int len, char *ptr, int skip, char freeptr);
int			get_next_line(int fd, char **line);

#endif
