/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaanni <mbaanni@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:39:56 by mbaanni           #+#    #+#             */
/*   Updated: 2022/10/20 12:09:20 by mbaanni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	lent;
	size_t	start;

	if (!s1 || !s2)
		return (0);
	start = 0;
	lent = ft_strlen(s1) + ft_strlen(s2);
	str = malloc((lent + 1));
	if (!str)
		return (0);
	lent = 0;
	while (s1[start])
		str[lent++] = s1[start++];
	start = 0;
	while (s2[start])
		str[lent++] = s2[start++];
	str[lent] = 0;
	return (str);
}
