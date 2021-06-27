/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iha <iha@student.42.kr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 23:49:08 by iha               #+#    #+#             */
/*   Updated: 2021/06/23 19:34:14 by iha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char temp;

	temp = (unsigned char)c;
	while (*s)
	{
		if (*s == temp)
			return (char *)s;
		s++;
	}
	if (*s == temp)
		return (char *)s;
	return (0);
}
