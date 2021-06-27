/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iha <iha@student.42.kr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 23:49:32 by iha               #+#    #+#             */
/*   Updated: 2021/05/25 17:48:08 by iha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	char	*temp;
	int		n;

	if (s1 == 0 || s2 == 0)
		return (0);
	n = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(dst = (char *)malloc(n * sizeof(char))))
		return (0);
	temp = dst;
	while (*s1)
		*temp++ = *s1++;
	while (*s2)
		*temp++ = *s2++;
	*temp = 0;
	return (dst);
}
