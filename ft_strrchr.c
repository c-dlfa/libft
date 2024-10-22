/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelfa-m <cdelfa-m@student.42Bareclon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:35:41 by cdelfa-m          #+#    #+#             */
/*   Updated: 2024/10/07 17:39:52 by cdelfa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stido.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	ptr = NULL;
	i = 0;
	while (*s)
	{
		if (*s == c)
			ptr = (char *)s;
		s++;
	}
	return (ptr);
}