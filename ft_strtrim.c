/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurgia- <mmurgia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 10:47:51 by mmurgia-          #+#    #+#             */
/*   Updated: 2022/04/28 13:45:51 by mmurgia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_check_char(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{	
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_check_char(s1[start], set))
	{
		start++;
	}
	end = ft_strlen(s1);
	while (end > start && ft_check_char(s1[end - 1], set))
	{
		end--;
	}
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}

/* int	main(void)
{
	char	s1[] = "lorem ipsum dolor sit amet";
	char	*set;
	size_t	i;
	size_t	j;
	char	*strtrim;

	set = "l ";
	i = ft_sizefront(s1, set);
	j = ft_sizeend(s1, set);
	printf("Valor Start: %zu\n", i);
	printf("Valor End: %zu\n", j);
	strtrim = ft_strtrim(s1, set);
	printf("%s\n", strtrim);
}
 */