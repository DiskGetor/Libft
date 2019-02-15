/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsome.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 17:42:56 by nwidaha           #+#    #+#             */
/*   Updated: 2019/02/05 08:56:43 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchange(size_t size, char c)
{
	char	*string;
	int		i;

	if ((string = malloc(size)) == NULL)
		return (NULL);
	i = 0;
	while ((size_t)i < size)
	{
		*(string + i) = c;
		i++;
	}
	return (string);
}
