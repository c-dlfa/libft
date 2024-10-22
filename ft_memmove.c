/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelfa-m <cdelfa-m@student.42Bareclon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:26:16 by cdelfa-m          #+#    #+#             */
/*   Updated: 2024/10/07 16:26:25 by cdelfa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*local_src;
	char		*local_dest;
	size_t		i;

	local_src = (const char *)src;
	local_dest = (char *)dest;
	i = 0;
	if (local_dest < local_src)
	{
		while (i < n)
		{
			local_dest[i] = local_src[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			local_dest[n] = local_src[n];
		}
	}
	return (dest);
}
