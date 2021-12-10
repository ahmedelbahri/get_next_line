/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 21:47:52 by ahel-bah          #+#    #+#             */
/*   Updated: 2021/12/09 21:48:31 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strchr(const char *s)
{
	int	i;

	i = 0;
	if (s == 0)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	i = 0;
	s2 = malloc(ft_strlen(s1) * sizeof(char) + 1);
	if (s2 == 0)
		return (0);
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char	*ft_strjoin(char *buffer, char *new)
{
	char	*al;
	size_t	i;
	size_t	j;

	if (!buffer)
		buffer = ft_strdup("");
	al = malloc(ft_strlen(buffer) + ft_strlen(new) + 1);
	if (al == 0)
		return (0);
	i = 0;
	while (buffer[i] != '\0')
	{
		al[i] = buffer[i];
		i++;
	}
	j = 0;
	while (new[j] != '\0')
		al[i++] = new[j++];
	al[i] = '\0';
	free(buffer);
	return (al);
}
