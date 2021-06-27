/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iha <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 23:43:06 by iha               #+#    #+#             */
/*   Updated: 2021/05/19 23:43:07 by iha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*dst;
	unsigned int	n;

	n = count * size;
	if (!(dst = malloc(n)))
		return (0);
	ft_bzero(dst, n);
	return (dst);
}
