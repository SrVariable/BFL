/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:47:35 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/06/02 10:22:01 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "BFL.h"
#include <stdio.h>
#include <ctype.h>

int	bfl_toupper_test(void)
{
	for (int i = -1; i < 1000000; i++)
		if (bfl_toupper(i) != toupper(i))
			return (0);
	return (1);
}

int	bfl_tolower_test(void)
{
	for (int i = -1; i < 1000000; i++)
		if (bfl_tolower(i) != tolower(i))
			return (0);
	return (1);
}
