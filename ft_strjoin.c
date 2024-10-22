/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelfa-m <cdelfa-m@student.42Bareclon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:43:41 by cdelfa-m          #+#    #+#             */
/*   Updated: 2024/10/16 16:52:59 by cdelfa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size_s1;
	size_t	size_s2;
	int		i;

	i = 0;
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	str = ft_calloc((size_s1 + size_s2 + 1), sizeof(char));
	while (i < size_s1)
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < size_s2)
	{
		str[i + size_s1] = s2[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
