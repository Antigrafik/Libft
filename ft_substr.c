/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurgia- <mmurgia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 09:47:05 by mmurgia-          #+#    #+#             */
/*   Updated: 2022/04/27 11:29:33 by mmurgia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	j;

	j = 0;
	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen((char *)s))
	{
		str = (char *)malloc(1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (len > (unsigned int)ft_strlen((char *)s))
		len = (unsigned int)ft_strlen((char *)s);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	while (s[j] && j < len)
	{
		str[j++] = s[start++];
	}	
	str[j] = '\0';
	return (str);
}

/* int	main(void)
{
	char	str[] = "lorem ipsum dolor sit amet";
	char	*strsub;

	strsub = ft_substr(str, 6, 6);
	printf("%s\n", strsub);
}	
 */