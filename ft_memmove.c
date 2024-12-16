/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkuner <mkuner@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:34:45 by mkuner            #+#    #+#             */
/*   Updated: 2024/11/13 18:13:10 by mkuner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!src && !dst)
		return (NULL);
	if (dst > src)
	{
		d = (unsigned char *)dst;
		s = (unsigned char *)src;
		while (len--)
			d[len] = s[len];
	}
	else
		return (ft_memcpy(dst, src, len));
	return (dst);
}
