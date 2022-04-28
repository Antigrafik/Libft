/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurgia- <mmurgia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:37:01 by mmurgia-          #+#    #+#             */
/*   Updated: 2022/04/11 12:04:44 by mmurgia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		((char *)dst)[i] = ((const char *)src)[i];
		i++;
	}
	return (dst);
}

/* int	main(void)
{
	char	destino[] ="";
	char	origen[] = "";
	int		c;
	size_t	n;

	c = 'a';
	n = 4;
	ft_memcpy(destino, origen, n);
	write (1, &destino, 2);
	memcpy(destino, origen, n);
	write (1, &destino, 2);
	write (1, "\n", 1);
} */
