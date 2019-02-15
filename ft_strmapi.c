/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwidaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 17:11:07 by nwidaha           #+#    #+#             */
/*   Updated: 2019/02/03 17:14:07 by nwidaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		*(new_string + i) = f(i, *(s + i));
	return (new_string);
}
