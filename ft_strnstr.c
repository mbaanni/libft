/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaanni <mbaanni@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:45:02 by mbaanni           #+#    #+#             */
/*   Updated: 2022/10/22 15:47:13 by mbaanni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	size_t	i;
	size_t	nsize;
	size_t	j;
	size_t	hsize;

	if ((hay == 0 && len == 0))
		return (0);
	nsize = ft_strlen(need);
	hsize = ft_strlen(hay);
	if (hay && len == 0 && need[0] == 0)
		return ((char *)hay);
	if (hay[0] == 0 && need[0] == 0)
		return ((char *)hay);
	i = 0;
	while (hay[i] && i < len)
	{
		j = 0;
		while (((hay[i + j] == need[j]) && j < nsize) && (hay[i + j] && i
				+ j < len))
			j++;
		if (j == nsize)
			return ((char *)(hay + i));
		i++;
	}
	return (0);
}
