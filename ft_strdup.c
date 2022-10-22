/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaanni <mbaanni@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:17:00 by mbaanni           #+#    #+#             */
/*   Updated: 2022/10/20 12:09:29 by mbaanni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		lent;

	lent = ft_strlen(s1);
	str = malloc(lent + 1);
	if (!str)
		return (0);
	lent = 0;
	while (s1[lent])
	{
		str[lent] = s1[lent];
		lent++;
	}
	str[lent] = 0;
	return (str);
}
