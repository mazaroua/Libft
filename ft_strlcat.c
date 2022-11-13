/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazaroua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:39:29 by mazaroua          #+#    #+#             */
/*   Updated: 2022/10/21 16:39:31 by mazaroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	j;
	size_t	res;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		res = dstsize + src_len;
	else
		res = dst_len + src_len;
	while (src[j] && dstsize > dst_len + 1)
	{
		dst[dst_len++] = src[j++];
	}
	dst[dst_len] = '\0';
	return (res);
}
