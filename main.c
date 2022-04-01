/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurgia- <mmurgia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:15:27 by mmurgia-          #+#    #+#             */
/*   Updated: 2022/03/31 13:41:27 by mmurgia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char 	cadena[50];
	char	str[11] = "Hola quetal";
	int		c;
	size_t	n;

	c = '.';
	n = 6;
/* 	printf("%d", ft_isalpha(c));
	printf("%d", ft_isdigit(c));
	printf("%d", ft_isalnum(c));
	printf("%d", ft_isascii(c));
	printf("%d", ft_isprint(c));
	printf("%d", ft_strlen(""));
	ft_memset(str + 4, c, n);
	printf("%s\n", str);
	memset(str + 4 , c, n);
	printf("%s", str);
	bzero(str, n);
	write (1, &str, 11);
	write (1, "\n", 1);
	printf("%s", str);
	ft_bzero(str, n);
	write (1, &str, 11);
	printf("%s\n", str);
	memcpy(cadena, str, n);
	write (1, &cadena, 2);
	write (1, "\n", 1);
	ft_memcpy(cadena, str, n);
	write (1, &cadena, 2); */
	ft_memmove(cadena, str, n);
	printf("%s\n", cadena);
	memmove(cadena, str, n);
	printf("%s\n", cadena);
}
