/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelfa-m <cdelfa-m@student.42Bareclon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:42:33 by cdelfa-m          #+#    #+#             */
/*   Updated: 2024/10/16 17:53:19 by cdelfa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tmpa;
	unsigned char	*tmpb;

	tmpa = (unsigned char *)s1;
	tmpb = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (tmpa[i] != tmpb[i])
			return (tmpa[i] - tmpb[i]);
		i++;
	}
	return (0);
}
