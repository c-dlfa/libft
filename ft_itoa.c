/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelfa-m <cdelfa-m@student.42Bareclon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 21:04:45 by cdelfa-m          #+#    #+#             */
/*   Updated: 2024/10/16 21:08:06 by cdelfa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	ft_count_digits(int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digits;

	digits = ft_count_digits(n);
	if (n == INT_MIN)
		return ("-2147483648");
	if (n < 0)
		digits++;
	str = malloc((digits + 1) * sizeof (char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	while (n != 0)
	{
		str[--digits] = (n % 10) + 48;
		n = n / 10;
	}
	return (str);
}
