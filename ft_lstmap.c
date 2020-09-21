/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalache <dgalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 08:58:14 by dgalache          #+#    #+#             */
/*   Updated: 2020/07/13 09:42:31 by dgalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_ptr;
	t_list	*next;

	lst_ptr = NULL;
	while (lst)
	{
		if (!(next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&lst_ptr, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_ptr, next);
		lst = lst->next;
	}
	return (lst_ptr);
}
