/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 14:08:13 by srheede           #+#    #+#             */
/*   Updated: 2018/05/31 14:28:58 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *lst_new;

	while (lst)
	{
		lst_new = (t_list *)malloc(sizeof(t_list));
		if (!lst_new)
			return (NULL);
		lst_new = f(lst);
		lst_new->next = lst_new;
		lst = lst->next;
	}
	return (lst_new);
}
