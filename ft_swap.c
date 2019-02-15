/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 16:51:19 by nwidaha           #+#    #+#             */
/*   Updated: 2019/02/03 16:56:07 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(void *data1, void *data2, size_t size)
{
	unsigned char *temp_data;

	temp_data = (unsigned char *)malloc(size * sizeof(unsigned char));
	if (temp_data == NULL)
		return ;
	ft_memmove(temp_data, data1, size);
	ft_memmove(data1, data2, size);
	ft_memmove(data2, temp_data, size);
	free(temp_data);
}
