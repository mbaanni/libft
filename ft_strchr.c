/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaanni <mbaanni@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:30:52 by mbaanni           #+#    #+#             */
/*   Updated: 2022/10/20 12:08:00 by mbaanni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*(unsigned char *)s && *((unsigned char *)s) != (unsigned char)c)
		s++;
	if (*((unsigned char *)s) == (unsigned char)c)
		return ((char *)s);
	return (0);
}
