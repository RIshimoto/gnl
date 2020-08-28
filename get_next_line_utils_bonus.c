/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 05:04:29 by rishimot          #+#    #+#             */
/*   Updated: 2020/08/29 00:39:58 by rishimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t			ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char			*ft_strjoin(char *s1, char *s2, size_t s2_length)
{
	char	*t;
	size_t	t_index;
	size_t	s1_length;
	size_t	merge_len;
	int		i;

	if (s1 == NULL || s2 == NULL)
		return (0);
	s1_length = ft_strlen(s1);
	merge_len = s1_length + s2_length;
	if ((t = (char *)malloc((merge_len + 1) * sizeof(char))) == NULL)
		return (0);
	t_index = 0;
	i = 0;
	while (t_index < s1_length)
		t[t_index++] = s1[i++];
	i = 0;
	while (t_index < s2_length)
		t[t_index++] = s2[i++];
	t[t_index] = '\0';
	super_free(&s1);
	return (t);
}

char			*ft_strdup(const char *s)
{
	char	*t;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (!(t = (char *)malloc((s_len + 1) * sizeof(char))))
		return (0);
	i = 0;
	while (s[i])
	{
		t[i] = s[i];
		i++;
	}
	t[i] = '\0';
	return (t);
}

char	*ft_strchr(const char *s, int c)
{
	char			*str;
	unsigned char	uc;

	str = (char *)s;
	uc = (unsigned char)c;
	while (*str != '\0')
	{
		if (*str == uc)
			return (str);
		str++;
	}
	if (c == 0)
		return (str);
	return (0);
}
