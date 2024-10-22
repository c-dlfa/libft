/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelfa-m <cdelfa-m@student.42Bareclon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:21:14 by cdelfa-m          #+#    #+#             */
/*   Updated: 2024/10/22 16:21:16 by cdelfa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*allocated;

	if (!(nelem) || !(elsize))
		return (NULL);
	allocated = malloc (nelem * elsize);
	if (!(allocated))
		return (arr);
	ft_bzero (allocated, (nelem * elsize));
	return ((void *)allocated);
}
