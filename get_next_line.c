/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 14:31:52 by lrichard          #+#    #+#             */
/*   Updated: 2021/01/27 15:03:27 by lrichard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			ft_get_line(char **line, char **buff, int eoli)
{
	if (eoli != -1)
		(*buff)[eoli] = 0;
	if (!(*line = ft_realloc(1, *buff, 0, 0)))
		return (-1);
	if (eoli != -1)
		if (!(*buff = ft_realloc(BUFFER_SIZE + 1, *buff, eoli + 1, 1)))
			return (-1);
	return (eoli != -1);
}

int			ft_read_line(int fd, char **buff, char **line)
{
	int		rd;
	int		eoli;
	int		len;

	rd = 1;
	len = ft_strlen(*buff);
	while ((rd = read(fd, *buff + len, BUFFER_SIZE)) != -1)
	{
		(*buff)[len + rd] = 0;
		eoli = ft_get_eoli(*buff);
		if (eoli != -1 || rd == 0)
			return (ft_get_line(line, buff, eoli));
		if (!(*buff = ft_realloc(BUFFER_SIZE + 1, *buff, 0, 1)))
			return (-1);
		len = ft_strlen(*buff);
	}
	return (-1);
}

int			get_next_line(int fd, char **line)
{
	int				rd;
	static char		*buffer[256] = { 0 };

	if (!line || fd < 0 || fd > 255)
		return (-1);
	*line = 0;
	if (!buffer[fd])
	{
		if (!(buffer[fd] = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1))))
			return (-1);
		buffer[fd][0] = 0;
	}
	rd = ft_read_line(fd, &(buffer[fd]), line);
	if (rd != 1)
	{
		free(buffer[fd]);
		buffer[fd] = 0;
		if (rd == -1)
		{
			free(*line);
			*line = 0;
		}
	}
	return (rd);
}
