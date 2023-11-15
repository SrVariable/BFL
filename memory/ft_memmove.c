/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:45:26 by ribana-b          #+#    #+#             */
/*   Updated: 2023/11/15 16:03:38 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bfl.h"

void	*ft_memmove(void *str, const void *str2, size_t bytes)
{
	char	*temp;
	char	*temp2;

	if (!str || !str2)
		return (NULL);
	temp = (char *)str;
	temp2 = (char *)str2;
	if (str > str2 || str < (str2 + bytes))
		while (bytes--)
			str[bytes] = str2[bytes];
	else
		ft_memcpy(str, str2, bytes);
	return (str);
}
