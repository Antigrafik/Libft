/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurgia- <mmurgia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 12:31:00 by mmurgia-          #+#    #+#             */
/*   Updated: 2022/04/22 13:32:13 by mmurgia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lista;

	lista = (t_list *)malloc(sizeof(t_list));
	if (!lista)
		return (NULL);
	lista -> content = content;
	lista -> next = NULL;
	return (lista);
}

/* int	main(void)
{
	char	str[] = "lorem ipsum dolor sit";
	t_list	*elemento;

	elemento = ft_lstnew((void *)str);
	printf("%s\n", elemento -> content);
	return (0);
}
 */