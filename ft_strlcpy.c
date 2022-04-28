/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurgia- <mmurgia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 10:28:24 by mmurgia-          #+#    #+#             */
/*   Updated: 2022/04/12 11:41:33 by mmurgia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (dstsize > 0)
	{
		while (j < (dstsize - 1) && src[j])
		{
			dst[j] = src[j];
			j++;
		}
		dst[j] = '\0';
	}
	return (i);
}

/* int	main(void)
{
	char	cadena[] ="";
	size_t	n;
	char	str[] = "";

	n = 4;
	ft_strlcpy(cadena, str, n);
	printf("Mai funcion: %s\n", cadena);
	strlcpy(cadena, str, n);
	printf("Original funcion: %s\n", cadena);
}
 */