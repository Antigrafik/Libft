/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurgia- <mmurgia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:21:38 by mmurgia-          #+#    #+#             */
/*   Updated: 2022/03/31 13:38:35 by mmurgia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	const char		*origen;
	size_t			i;

	i = 0;
	dest = dst;
	origen = src;
	while (i < len)
	{
		dest[i] = origen[i];
		i++;
	}
	return (dst);
}
