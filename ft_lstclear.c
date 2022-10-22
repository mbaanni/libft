/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaanni <mbaanni@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:40:13 by mbaanni           #+#    #+#             */
/*   Updated: 2022/10/22 15:14:02 by mbaanni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (lst == 0)
		return ;
	if (*lst && del)
	{
		while (*lst)
		{
			del((*lst)->content);
			ptr = (*lst)->next;
			free(((*lst)));
			(*lst) = ptr;
		}
	}
}
