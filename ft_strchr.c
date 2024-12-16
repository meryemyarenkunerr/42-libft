/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkuner <mkuner@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:52:56 by mkuner            #+#    #+#             */
/*   Updated: 2024/11/13 17:56:44 by mkuner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*ch;

	ch = (unsigned char *)s;
	while (*ch)
	{
		if (*ch == (unsigned char)c)
			return ((char *)ch);
		ch++;
	}
	if (*ch == (unsigned char)c)
		return ((char *)ch);
	return (NULL);
}
