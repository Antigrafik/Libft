/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurgia- <mmurgia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:53:52 by mmurgia-          #+#    #+#             */
/*   Updated: 2022/04/27 14:40:43 by mmurgia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* char	mi_funcion(unsigned int i, char str)
{
	i = 32;
	return (str - i);
}

int	main(void)
{
	char	*str;
	char	*resultado;

	str = "?hola?guapa.?";
	printf("el resultado es: %s\n", str);
	resultado = ft_strmapi(str, mi_funcion);
	printf("el resultado es: %s\n", resultado);
	return (0);
} */
