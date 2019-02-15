/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 16:58:12 by nwidaha           #+#    #+#             */
/*   Updated: 2019/02/03 17:02:09 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	size_t	i;
	size_t	j;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_string = ft_strnew(s1_len + s2_len);
	if (!new_string)
	{
		return (NULL);
	}
	i = -1;
	j = -1;
	while (++i < s1_len)
		*(new_string + i) = *(s1 + i);
	while (++j < s2_len)
		*(new_string + i++) = *(s2 + j);
	return (new_string);
}
