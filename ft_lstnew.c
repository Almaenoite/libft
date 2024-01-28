/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbae <tbae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:05:26 by tbae              #+#    #+#             */
/*   Updated: 2023/04/28 12:13:21 by tbae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *lst;

	lst = malloc(sizeof(lst));
	if (!lst)
		return (0);
	lst->content = content;
	lst->next = NULL;
	return (content);
}
