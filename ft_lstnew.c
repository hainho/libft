/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iha <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 09:35:04 by iha               #+#    #+#             */
/*   Updated: 2021/05/23 09:35:05 by iha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstnew(void *content)
{
	t_list *tl;

	if (!(tl = (t_list *)malloc(sizeof(t_list))))
		return (0);
	tl->content = content;
	tl->next = 0;
	return (tl);
}
