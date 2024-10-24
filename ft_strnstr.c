/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelfa-m <cdelfa-m@student.42Bareclon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:55:04 by cdelfa-m          #+#    #+#             */
/*   Updated: 2024/10/16 20:06:51 by cdelfa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*first_ocurrence;
	size_t	i;

	i = 0 + len - len;
	if (!little)
		return ((char *)big);
	while (big[i] != '\0')
	{
		first_ocurrence = (char *)&big[i];
		while (big[i] == little[i])
		{
			if (little[(i + 1)] == '\0')
				return (first_ocurrence);
			i++;
		}
		i++;
	}
	return (NULL);
}
