/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 15:22:20 by lrichard          #+#    #+#             */
/*   Updated: 2021/01/27 15:22:32 by lrichard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_get_eoli(char *s)
{
	int i;

	i = -1;
	while (s[++i])
		if (s[i] == '\n')
			return (i);
	return (-1);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int i3;

	i = -1;
	i3 = -1;
	while (dest[++i3])
		;
	while (src[++i])
		dest[i3 + i] = src[i];
	dest[i3 + i] = '\0';
	return (dest);
}

char	*ft_realloc(int size, char *ptr, int skip, char freeptr)
{
	size_t	len;
	char	*mem;
	char	*str;

	str = ptr + skip;
	len = ft_strlen(str);
	if (!(mem = (char *)malloc(sizeof(char) * (len + size))))
		return (NULL);
	mem[0] = 0;
	ft_strcat(mem, str);
	if (freeptr)
		free(ptr);
	return (mem);
}
