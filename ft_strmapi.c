/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iha <iha@student.42.kr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 23:50:51 by iha               #+#    #+#             */
/*   Updated: 2021/05/25 17:46:36 by iha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dst;
	size_t			len;
	unsigned int	n;

	if (s == 0 || f == 0)
		return (0);
	len = ft_strlen(s);
	if (!(dst = (char *)malloc((len + 1) * sizeof(char))))
		return (0);
	n = 0;
	while (s[n])
	{
		dst[n] = f(n, s[n]);
		n++;
	}
	dst[n] = 0;
	return (dst);
}
