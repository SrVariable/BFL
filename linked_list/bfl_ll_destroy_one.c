/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bfl_ll_destroy_one.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 12:39:30 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/06/02 14:08:25 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "BFL.h"

void	bfl_ll_destroy_one(t_ll **linked_list)
{
	t_ll	*temp;

	if (!linked_list || !(*linked_list))
		return ;
	temp = (*linked_list)->next;
	bfl_ll_destroy_content(linked_list);
	free(*linked_list);
	*linked_list = temp;
}
