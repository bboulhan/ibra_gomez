/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:19:37 by bboulhan          #+#    #+#             */
/*   Updated: 2021/11/26 20:11:59 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		k;
	t_list	*y;

	k = 0;
	if (lst)
	{
		y = lst;
		while (y != NULL)
		{
			y = y -> next;
			k++;
		}
		return (k);
	}
	return (0);
}		
