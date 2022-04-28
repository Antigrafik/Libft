/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurgia- <mmurgia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 09:52:23 by mmurgia-          #+#    #+#             */
/*   Updated: 2022/04/14 10:34:37 by mmurgia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* int	ft_atoi(const char *str);

int	main(int argc, char *argv[2])
{
	if (argc == 1)
		printf("Introduce un string");
	else
	{
		printf("FUncion Mai: %d\n", ft_atoi(argv[1]));
		printf("Funcion Original: %d\n", atoi(argv[1]));
	}
	return (0);
} */

int	ft_atoi(const char *str)
{
	int	sign;
	int	i;
	int	num;

	sign = 0;
	i = 0;
	num = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	if (sign > 0)
		num = num * (-1);
	return (num);
}
