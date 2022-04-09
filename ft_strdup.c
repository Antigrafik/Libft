/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurgia- <mmurgia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:08:25 by mmurgia-          #+#    #+#             */
/*   Updated: 2022/04/08 16:08:25 by mmurgia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s1)
{
	size_t  i;
	char	*dest;

	i = 0;
	while(s1[i] != 0)
	{
		i++;
	}
	dest = malloc(i + 1);
	if (!dest)
	{
		return (NULL);
	}
	i = 0;
	while(s1[i])
		{
			dest[i] = s1[i];
			i++;
		}
		dest[i] = s1[i];
	return (dest);
}

int main(void)
{
	char *r;
	printf("%s\n", ft_strdup("hola Mundo!!"));
	r = strdup("hola Mundo!!");
	printf("Funcion Original: %s\n", r);
	return (0);
}
