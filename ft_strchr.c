/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurgia- <mmurgia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:24:36 by mmurgia-          #+#    #+#             */
/*   Updated: 2022/04/11 10:02:30 by mmurgia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return (&str[i]);
	return (0);
}

/* int	main(void)
{
	const char	str[] = "tripouille";
	int			ch;
	char		*ret;

	ch = 't' + 256;
	ret = ft_strchr(str, ch);
	printf("Mai funcion: %s\n", ret);
	ret = strchr(str, ch);
	printf("Original funcion: %s\n", ret);
	return (0);
}
 */