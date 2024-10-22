/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelfa-m <cdelfa-m@student.42Bareclon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:37:18 by cdelfa-m          #+#    #+#             */
/*   Updated: 2024/10/16 21:03:19 by cdelfa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	s[13];
	int		i;

	i = 0;
	s = ft_itoa(n);
	while (ft_isdigit(s[i]) || s[i] == '-')
		ft_putchar(s[i++], fd);
}
