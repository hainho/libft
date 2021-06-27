/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iha <iha@student.42.kr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 23:49:19 by iha               #+#    #+#             */
/*   Updated: 2021/05/25 17:07:12 by iha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	char	*temp;
	char	*dst;

	size = ft_strlen(s1);
	if (!(dst = (char *)malloc((size + 1) * sizeof(char))))
		return (0);
	temp = dst;
	while (size--)
		*temp++ = *s1++;
	*temp = 0;
	return (dst);
}
