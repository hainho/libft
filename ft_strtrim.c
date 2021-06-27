/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iha <iha@student.42.kr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 23:51:37 by iha               #+#    #+#             */
/*   Updated: 2021/05/25 17:47:15 by iha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	char	*start;
	char	*end;

	if (s1 == 0)
		return (0);
	end = (char *)s1 + ft_strlen(s1) - 1;
	while (ft_strchr(set, *end) && end > s1)
		end--;
	start = (char *)s1;
	while (ft_strchr(set, *start) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(""));
	if (!(dst = malloc(end - start + 2)))
		return (0);
	ft_strlcpy(dst, start, end - start + 2);
	dst[end - start + 1] = 0;
	return (dst);
}
