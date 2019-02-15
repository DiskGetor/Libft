/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 15:06:35 by nwidaha           #+#    #+#             */
/*   Updated: 2019/02/03 16:14:18 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*source;
	char	*destination;
	size_t	i;

	i = -1;
	source = (char *)src;
	destination = (char *)dst;
	if (source < destination)
	{
		while ((int)(--len) >= 0)
			*(destination + len) = *(source + len);
	}
	else
		while (++i < len)
			*(destination + i) = *(source + i);
	return (dst);
}
