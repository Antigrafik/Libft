/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurgia- <mmurgia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 10:32:10 by mmurgia-          #+#    #+#             */
/*   Updated: 2022/04/25 10:54:08 by mmurgia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(int n_len)
{
	int	len;

	len = 1;
	while (n_len / 10 != 0)
	{
		len++;
		n_len = n_len / 10;
	}
	if (n_len < 0)
		len = len + 1;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*strnum;
	int		i;
	int		str_len;
	long	nb;

	nb = n;
	str_len = ft_length(nb);
	strnum = (char *)malloc(sizeof(char) * (str_len + 1));
	if (!(strnum))
		return (NULL);
	strnum[str_len] = '\0';
	i = 0;
	if (nb < 0)
	{
		strnum[i] = '-';
		nb = nb * -1;
	}
	if (nb == 0)
		strnum[0] = '0';
	while (nb > 0)
	{
		strnum[str_len - i++ - 1] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (strnum);
}

/* int  main(void)
{
   int     num;
   int     i;
   char    *output;
 
   num = 123456;
   i = 0;
   output = ft_itoa(num);
   while (output[i])
   {
       write(1, &output[i], 1);
       i++;
   }
   free(output);
   return (0);
} */
