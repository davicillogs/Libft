/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalache <dgalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 08:48:36 by dgalache          #+#    #+#             */
/*   Updated: 2020/07/13 08:53:00 by dgalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lstptr;
	t_list	*next;

	lstptr = *lst;
	while (lstptr)
	{
		next = lstptr->next;
		del(lstptr->content);
		free(lstptr);
		lstptr = next;
	}
	*lst = NULL;
}
