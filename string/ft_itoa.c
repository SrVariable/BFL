/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:32:44 by ribana-b          #+#    #+#             */
/*   Updated: 2024/02/13 15:04:42 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bfl.h"

static size_t	number_length(int number)
{
	size_t	counter;

	if (number < 0)
		number = number * -1;
	else
		number = number;
	counter = 1;
	while (number / 10)
	{
		number /= 10;
		counter++;
	}
	return (counter);
}

static char	*fixed_malloc(int number, size_t bytes)
{
	char	*str;

	if (number < 0)
		str = (char *)malloc((bytes + 2) * sizeof(char));
	else
		str = (char *)malloc((bytes + 1) * sizeof(char));
	if (!str)
		return (NULL);
	return (str);
}

static void	number_to_string(char *str, int number, size_t length)
{
	long	temp;

	if (number < 0)
		temp = (long)number * -1;
	else
		temp = (long)number;
	str[length] = '\0';
	while (length--)
	{
		str[length] = temp % 10 + '0';
		temp /= 10;
	}
	return ;
}

char	*ft_itoa(int number)
{
	char	*str;
	size_t	length;

	length = number_length(number);
	str = fixed_malloc(number, length);
	if (!str)
		return (NULL);
	if (number < 0)
	{
		str[0] = '-';
		number_to_string(str + 1, number, length);
	}
	else
		number_to_string(str, number, length);
	return (str);
}
