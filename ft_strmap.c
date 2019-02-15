/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 17:08:27 by nwidaha           #+#    #+#             */
/*   Updated: 2019/02/03 17:22:33 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_string;
	int		i;

	if (!s)
		return (NULL);
	new_string = ft_strnew(ft_strlen(s));
	if (!new_string)
		return (NULL);
	i = -1;
	while (*(s + ++i))
		*(new_string + i) = f(*(s + i));
	return (new_string);
}
