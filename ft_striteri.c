/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurgia- <mmurgia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:58:27 by mmurgia-          #+#    #+#             */
/*   Updated: 2022/04/25 12:19:51 by mmurgia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

/* char	mi_funcion(unsigned int i, char str)
{
	i = 32;
	return (str - i);
}

int	main(void)
{
	char	*str;
	char	*resultado = ft_striteri(str, mi_funcion);

	str = "?hola?guapa.?";
	printf("el resultado es: %s\n", str);
	printf("el resultado es: %s\n", resultado);
	return (0);
} */
