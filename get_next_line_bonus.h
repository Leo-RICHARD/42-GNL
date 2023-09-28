/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 15:30:56 by lrichard          #+#    #+#             */
/*   Updated: 2021/01/27 15:30:58 by lrichard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int			ft_strlen(char *str);
char		*ft_strcat(char *dest, char *src);
int			ft_get_eoli(char *s);
char		*ft_realloc(int len, char *ptr, int skip, char freeptr);
int			get_next_line(int fd, char **line);

#endif
