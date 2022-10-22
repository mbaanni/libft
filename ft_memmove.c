/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaanni <mbaanni@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:02:47 by mbaanni           #+#    #+#             */
/*   Updated: 2022/10/20 12:11:08 by mbaanni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*sdst;
	unsigned char	*ssrc;

	sdst = (unsigned char *)dst;
	ssrc = (unsigned char *)src;
	if (!sdst && !ssrc)
		return (0);
	if (dst <= src)
		sdst = ft_memcpy(sdst, ssrc, len);
	else
	{
		while (len--)
		{
			sdst[len] = ssrc[len];
		}
	}
	return (sdst);
}
