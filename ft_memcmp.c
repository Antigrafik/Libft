/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurgia- <mmurgia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 11:09:33 by mmurgia-          #+#    #+#             */
/*   Updated: 2022/04/11 10:40:59 by mmurgia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char	*s1 = "Hola";
	char	*s2 = "Homa";
	char	s1[] = {0, 0, 127, 0};
	char	s2[] = {0, 0, 42, 0};
	int		i;
	int		n;

	n = 4;
	i = memcmp(s1, s2, n);
	printf("Funcion Original: %d\n", i);
	i = ft_memcmp(s1, s2, n);
	printf("Funcion mai: %d\n", i);
} */
