/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurgia- <mmurgia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:55:08 by mmurgia-          #+#    #+#             */
/*   Updated: 2022/04/28 13:27:45 by mmurgia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size_substring(char const *s, char c)
{
	size_t	i;
	size_t	numsubstr;

	i = 0;
	numsubstr = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			numsubstr++;
		}
		while (s[i] && s[i] != c)
		{
			i++;
		}
		if (s[i])
		{
			i++;
		}
	}
	return (numsubstr);
}

char	*ft_substring(char const *s, char c, size_t j)
{
	size_t	i;
	size_t	count;
	char	*str;

	str = NULL;
	i = -1;
	count = -1;
	while (++i < (size_t)ft_strlen(s) && s[i])
	{
		if (s[i] != c)
			count++;
		if (count == j && s[i] != c)
		{
			count = i;
			while (s[count] && s[count] != c)
				count++;
			str = ft_substr(s, i, count - i);
			if (!str)
				return (NULL);
		}
		while (s[i] && s[i] != c)
			i++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	substring;
	size_t	i;

	if (!s)
		return (NULL);
	substring = ft_size_substring(s, c);
	if (c == '\0' && ft_strlen(s) > 0)
		substring = 1;
	strings = (char **)ft_calloc(substring + 1, sizeof(char *));
	if (strings == NULL)
		return (NULL);
	i = 0;
	while (i < substring)
	{
		strings[i] = ft_substring(s, c, i);
		if (strings[i] == NULL)
			return (NULL);
		i++;
	}
	strings[i] = NULL;
	return (strings);
}

/* int	main(void)
{
	char	*s = "      gfdgf      ";
	char	c = ' ';
	size_t	count;
	char	**tab = ft_split(s, c);
	size_t	i;

	i = 0;
	count =	ft_size_substring(s, c);
	printf("s[0]: %c\n", s[0]);
	printf("COUNT en main: %zu\n", count);
	while (i < count)
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
 */