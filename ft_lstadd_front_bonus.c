/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmurgia- <mmurgia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:22:52 by mmurgia-          #+#    #+#             */
/*   Updated: 2022/04/25 13:27:06 by mmurgia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
	{
		return ;
	}
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new -> next = *lst;
	*lst = new;
}

/* int	main(void)
{
	char	str[] = "dolor sit";
	char	new[] = "lorem ipsum ";
	t_list	*elemento;

	elemento = ft_lstadd_front(str, new);
	printf("%s\n", elemento -> content);
	return (0);
} */
