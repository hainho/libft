/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iha <iha@student.42.kr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 23:51:50 by iha               #+#    #+#             */
/*   Updated: 2021/05/25 17:48:56 by iha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	size;

	if (s == 0)
		return (0);
	while (*s && start)
	{
		s++;
		start--;
	}
	if (*s == 0)
	{
		if (!(dst = (char *)malloc(1 * sizeof(char))))
			return (0);
		*dst = 0;
		return (dst);
	}
	size = ft_strlen(s);
	if (len > size)
		len = size;
	if (!(dst = (char *)malloc((len + 1) * sizeof(char))))
		return (0);
	ft_strlcpy(dst, s, len + 1);
	return (dst);
}
