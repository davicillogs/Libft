/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalache <dgalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:45:13 by dgalache          #+#    #+#             */
/*   Updated: 2020/07/13 11:46:05 by dgalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr_lst;

	if (!(ptr_lst = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	ptr_lst->content = content;
	ptr_lst->next = NULL;
	return (ptr_lst);
}
