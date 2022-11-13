/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazaroua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:45:53 by mazaroua          #+#    #+#             */
/*   Updated: 2022/10/20 14:48:28 by mazaroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	max_len(const char *s, unsigned int i, size_t len)
{
	if (len > ft_strlen(&s[i]))
		return (ft_strlen(&s[i]));
	return (len);
}

char	*ft_substr(const char *src, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s;
	size_t	src_len;
	char	*sub_src;

	if (!src)
		return (0);
	i = 0;
	s = start;
	src_len = ft_strlen(src);
	sub_src = malloc(sizeof(char) * (max_len(src, start, len) + 1));
	if (!sub_src)
		return (NULL);
	while (i < len && s < src_len)
		sub_src[i++] = src[s++];
	sub_src[i] = '\0';
	return (sub_src);
}
