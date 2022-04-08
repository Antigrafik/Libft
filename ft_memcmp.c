/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurgia- <mmurgia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 11:09:33 by mmurgia-          #+#    #+#             */
/*   Updated: 2022/04/07 11:18:05 by mmurgia-         ###   ########.fr       */
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
	while ((str1[i] != '\0' || str2[i] != '\0') && (i < n))
	{
		if (str1[i] < str2[i])
		{
			return (str1[i] - str2[i]);
		}
		else if (str1[i] > str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char	*s1;
	char	*s2;
	int		i;
	int		n;

	s1 = "fd";
	s2 = "fhyy";
	n = 2;
	i = memcmp(s1, s2, n);
	printf("Funcion Original: %d\n", i);
	i = ft_memcmp(s1, s2, n);
	printf("Funcion mai: %d\n", i);
} */
