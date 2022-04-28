/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_bueno.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurgia- <mmurgia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:55:08 by mmurgia-          #+#    #+#             */
/*   Updated: 2022/04/27 11:28:20 by mmurgia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_sub_len(const char *s, char c);

static size_t	ft_size_substring(char const *s, char c)
{
	size_t	i;
	size_t	numsubstr;

	i = 0;
	numsubstr = 1;
	while (s[i])
	{
		if ((s[i + 1] == c || s[i + 1] == 0) && s[i] != c)
		{	
			numsubstr++;
		}
		i++;
	}
	printf("Cantidad de string: %zu\n", numsubstr);
	return (numsubstr);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	str;
	size_t	count;
	char	**strings;

	strings = (char **)malloc((ft_size_substring(s, c) + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	i = 0;
	str = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] != c && s[i])
		{	
			if (s[i + 1] == c || s[i] == 00)
			{
				printf("Valor de i antes: %zu\n", i);
				printf("Valor de COUNT: %zu\n", count);
				printf("substr antes: %zu\n", str);
				strings[str] = ft_substr(s, count, (i + 1) - count);
				printf("Valor de i: %zu\n", i);
				printf("substr: %zu => ", str);
				printf("string: %s\n", strings[str]);
			}		
			i++;
		}
		str++;
		if (s[i] != 00)
			i++;
		printf("Valor de ULTIMA i: %zu\n", i);
		count = i;
	}
	strings[str] = NULL;
	return (strings);
}

size_t	ft_sub_len(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != c)
		len++;
	return (len);
}

int	main(void)
{
	char *s = "holak buenas  gtry tardes ki9";
	char c = ' ';
	char	**tab = ft_split(s, c);
	//int i = 0;
	printf("cero: %s", tab[1]);
/* 	while (i < 4)
	{
		printf("%s\n", tab[i]);
		i++;
	} */	
}
