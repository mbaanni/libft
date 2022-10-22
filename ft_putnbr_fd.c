/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaanni <mbaanni@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:08:54 by mbaanni           #+#    #+#             */
/*   Updated: 2022/10/22 15:30:12 by mbaanni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		c;
	long int	nn;

	nn = n;
	if (nn < 0)
	{
		write(fd, "-", 1);
		nn *= -1;
	}
	if (nn / 10)
		ft_putnbr_fd(nn / 10, fd);
	c = nn % 10 + 48;
	write(fd, &c, 1);
}
