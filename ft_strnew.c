/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 17:31:05 by nwidaha           #+#    #+#             */
/*   Updated: 2019/02/03 17:32:26 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*string;

	string = (char *)malloc(sizeof(char) * size + 1);
	if (!string)
		return (NULL);
	ft_bzero(string, size + 1);
	return (string);
}
