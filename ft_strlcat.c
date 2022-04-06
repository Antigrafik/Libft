/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurgia- <mmurgia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:28:15 by mmurgia-          #+#    #+#             */
/*   Updated: 2022/04/05 13:49:47 by mmurgia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ssize;
	size_t	dsize;

	ssize = 0;
	dsize = 0;
	i = 0;
	while (src[ssize] != '\0')
	{
		ssize++;
	}
	while (dst[dsize] != '\0' && dsize < dstsize)
	{
		dsize++;
	}
	i = dsize;
	while (src[dsize - i] && dsize + 1 < dstsize)
	{
		dst[dsize] = src[dsize - i];
		dsize++;
	}
	if (i < dstsize)
		dst[dsize] = '\0';
	return (i + ssize);
}
