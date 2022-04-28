/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurgia- <mmurgia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 10:16:08 by mmurgia-          #+#    #+#             */
/*   Updated: 2022/04/15 13:05:02 by mmurgia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	str1;
	size_t	str2;

	if (!s1 || !s2)
		return (NULL);
	str1 = ft_strlen(s1);
	str2 = ft_strlen(s2);
	newstr = (char *)malloc(str1 + str2 + 1);
	if (!newstr)
		return (NULL);
	ft_memmove((void *)newstr, s1, str1);
	ft_memmove((void *)(newstr + str1), s2, str2);
	newstr[str1 + str2] = '\0';
	return (newstr);
}

/* int	main(void)
{
	char	s1[] = "lorem ipsum";
	char	s2[] = "dolor sit amet";
	char	*strjoin;

	strjoin = (char *)ft_strjoin(s1, s2);
	printf("%s", strjoin);
} */
