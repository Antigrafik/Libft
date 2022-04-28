/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurgia- <mmurgia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:21:38 by mmurgia-          #+#    #+#             */
/*   Updated: 2022/04/05 12:41:31 by mmurgia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	unsigned const char	*origen;
	size_t				i;

	i = 0;
	dest = dst;
	origen = src;
	if (dest > origen)
	{
		while (len--)
		{
			dest[len] = origen[len];
		}
	}
	else if (dest < origen)
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((const char *)src)[i];
			i++;
		}
	}
	return (dst);
}
