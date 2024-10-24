/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelfa-m <cdelfa-m@student.42Bareclon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:22:53 by cdelfa-m          #+#    #+#             */
/*   Updated: 2024/10/07 16:25:41 by cdelfa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*local_dest;
	unsigned const char	*local_src;

	local_dest = (unsigned char *)dest;
	local_src = (const unsigned char *)src;
	while (n-- > 0)
	{
		*local_dest++ = *local_src++;
	}
	return (dest);
}
