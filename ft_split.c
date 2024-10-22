/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelfa-m <cdelfa-m@student.42Bareclon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:02:56 by cdelfa-m          #+#    #+#             */
/*   Updated: 2024/10/16 17:10:49 by cdelfa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ft_word_counter(char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

int	ft_char_counter(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		size;
	int		i;
	int		j;
	int		k;

	k = 0;
	i = 0;
	j = 0;
	size = ft_strlen(s);
	split = ft_calloc((ft_word_counter(s, c) + 1), sizeof(char));
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		split[j] = ft_calloc(ft_char_counter(s, c) + 1, sizeof(char));
		while (s[i] != c && s[i] != '\0')
			split[j][k++] = s[i++];
		split[j++][k] = '\0';
		k = 0;
	}
	split[j][k] = '\0';
	return (split);
}
