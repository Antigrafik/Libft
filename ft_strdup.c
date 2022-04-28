/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurgia- <mmurgia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 12:07:23 by mmurgia-          #+#    #+#             */
/*   Updated: 2022/04/15 13:01:53 by mmurgia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*dest;

	i = 0;
	while (s1[i] != 0)
	{
		i++;
	}
	dest = malloc(i + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int	main(void)
{
	char	*r;

	r = ft_strdup("hola Mundo!!");
	printf("%s\n", r);
	r = strdup("hola Mundo!!");
	printf("Funcion Original: %s\n", r);
	return (0);
} */
