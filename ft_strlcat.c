/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaanni <mbaanni@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 10:07:32 by mbaanni           #+#    #+#             */
/*   Updated: 2022/10/22 15:40:53 by mbaanni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dsize;
	size_t	ssize;
	size_t	i;

	i = 0;
	if ((dst == NULL || src == NULL) && size == 0)
		return (ft_strlen(src));
	dsize = ft_strlen(dst);
	ssize = ft_strlen(src);
	if (size <= dsize)
		return (size + ssize);
	while (src[i] && (i + dsize) < size - 1)
	{
		dst[i + dsize] = src[i];
		i++;
	}
	dst[i + dsize] = 0;
	return (ssize + dsize);
}
