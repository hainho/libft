/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iha <iha@student.42.kr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 09:34:50 by iha               #+#    #+#             */
/*   Updated: 2021/05/25 15:30:27 by iha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tl;
	t_list	*temp;

	if (lst == 0 || f == 0)
		return (0);
	tl = 0;
	while (lst)
	{
		if (!(temp = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&tl, del);
			return (0);
		}
		ft_lstadd_back(&tl, temp);
		temp = temp->next;
		lst = lst->next;
	}
	return (tl);
}
