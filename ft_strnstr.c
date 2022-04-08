/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurgia- <mmurgia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 11:19:05 by mmurgia-          #+#    #+#             */
/*   Updated: 2022/04/07 13:41:36 by mmurgia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str1;
	char	*str2;
	size_t	i;
	size_t	j;

	i = 0;
	str1 = (char *)haystack;
	str2 = (char *)needle;
	if (needle[i] == '\0')
		return (str1);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{		
			if (needle[j + 1] == '\0')
				return (str1 + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	const char	*s1;
	const char	*s2;
	char		*i;
	size_t		n;

	s1 = "lorem ipsum dolor sit amet";
	s2 = "ipsumm";
	n = 30;
	i = strnstr(s1, s2, n);
	printf("Funcion Original: %s\n", i);

	i = ft_strnstr(s1, s2, n);
	printf("Funcion mai: %s\n", i);
} */
