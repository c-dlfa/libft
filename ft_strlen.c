/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelfa-m <cdelfa-m@student.42Bareclon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:05:07 by cdelfa-m          #+#    #+#             */
/*   Updated: 2024/10/07 16:07:04 by cdelfa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *c)
{
	size_t	count;

	count = 0;
	while (c[count] != '\0')
	{
		count++;
	}
	return (count);
}
