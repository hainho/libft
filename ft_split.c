/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iha <iha@student.42.kr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 23:48:51 by iha               #+#    #+#             */
/*   Updated: 2021/06/27 17:40:17 by iha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	splitfree(char **sp)
{
	while (*sp)
	{
		free(*sp);
		*sp++ = 0;
	}
	free(sp);
	sp = 0;
}

static char	*nextstr(char *s, char c)
{
	while (*s != c && *s)
		s++;
	while (*s == c && *s)
		s++;
	return (s);
}

static int	splitlen(char *s, char c)
{
	int	len;

	len = 0;
	while (*s)
	{
		s = nextstr(s, c);
		len++;
	}
	return (len);
}

static char	*splitstr(char *s, char c)
{
	char	*dst;
	char	*temp;
	int		size;

	temp = s;
	while (*temp != c && *temp)
		temp++;
	size = temp - s;
	if (!(dst = ft_substr(s, 0, size + 1)))
		return (0);
	dst[size] = 0;
	return (dst);
}

char		**ft_split(char const *s, char c)
{
	char	**sp;
	char	**temp;
	char	*cur;
	int		size;

	cur = (char *)s;
	if (s == 0)
		return (0);
	while (*cur == c && *cur)
		cur++;
	size = splitlen(cur, c);
	if (!(sp = ft_calloc((size + 1), sizeof(char *))))
		return (0);
	temp = sp;
	while (*cur)
	{
		if (!(*temp++ = splitstr(cur, c)))
		{
			splitfree(sp);
			return (0);
		}
		cur = nextstr(cur, c);
	}
	*temp = 0;
	return (sp);
}
