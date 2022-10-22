/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaanni <mbaanni@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:42:38 by mbaanni           #+#    #+#             */
/*   Updated: 2022/10/20 11:58:45 by mbaanni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_size(int n)
{
	int	count;

	count = 1;
	if (n < 0)
		count++;
	while (n / 10)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*number;
	int		count;
	long	nb;

	nb = n;
	count = count_size(nb);
	number = malloc(count + 1);
	if (!number)
		return (0);
	number[count] = 0;
	count--;
	if (nb < 0)
		nb *= -1;
	while (count >= 0)
	{
		if (n < 0 && count == 0)
			number[0] = '-';
		else
			number[count] = nb % 10 + 48;
		count--;
		nb /= 10;
	}
	return (number);
}
