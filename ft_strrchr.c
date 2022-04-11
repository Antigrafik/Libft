/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurgia- <mmurgia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:15:42 by mmurgia-          #+#    #+#             */
/*   Updated: 2022/04/11 10:22:44 by mmurgia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}

/* int	main(void)
{
	const char	str[] = "Hoa due ppasa";
	const char	ch = 'p';
	char		*ret;

	ret = ft_strrchr(str, ch);
	printf("%s", ret);
	return (0);
} */
