/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurgia- <mmurgia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 11:35:51 by mmurgia-          #+#    #+#             */
/*   Updated: 2022/04/08 12:10:47 by mmurgia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dest;

	dest = malloc(sizeof(size) * count);
	if (!dest)
	{
		return (NULL);
	}
	ft_memset(dest, 0, size * count);
	return (dest);
}
