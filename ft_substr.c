/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaanni <mbaanni@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 08:10:20 by mbaanni           #+#    #+#             */
/*   Updated: 2022/10/22 16:22:07 by mbaanni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	to_alloc;
	size_t	i;

	i = -1;
	if (!s || start >= ft_strlen(s))
	{
		str = malloc(sizeof(char));
		if (!str)
			return (0);
		*str = 0;
		return (str);
	}
	to_alloc = ft_strlen(s) - start;
	if (len < to_alloc)
		to_alloc = len;
	str = malloc(sizeof(char) * (to_alloc + 1));
	if (!str)
		return (0);
	while (++i < to_alloc && s[i + start])
		str[i] = s[start + i];
	str[i] = '\0';
	return (str);
}
