/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelfa-m <cdelfa-m@student.42Bareclon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:06:31 by cdelfa-m          #+#    #+#             */
/*   Updated: 2024/10/16 21:02:21 by cdelfa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

char	*strdup(const char *s)
{
	char	*dup;
	size_t	size;
	int		i;

	i = -1;
	size = ft_strlen(s);
	dup = malloc ((size + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (s[++i] != '\0')
		dup[i] = s[i];
	dup[i] = '\0';
	return (dup);
}
