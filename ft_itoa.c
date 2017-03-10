/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrebeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 14:37:45 by vgrebeni          #+#    #+#             */
/*   Updated: 2017/01/18 14:37:47 by vgrebeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline int	ft_lung(int n)
{
	int				lung;

	lung = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		lung++;
	while (n != 0)
	{
		n = n / 10;
		lung++;
	}
	return (lung);
}

char				*ft_itoa(int n)
{
	char			*s;
	long			nb;
	int				lung;

	nb = n;
	lung = ft_lung(n);
	s = ft_strnew(lung);
	if (!s)
		return (NULL);
	if (nb < 0)
	{
		nb = -nb;
		s[0] = '-';
	}
	s[--lung] = (nb % 10 + '0');
	nb /= 10;
	while (nb > 0)
	{
		s[--lung] = (nb % 10 + '0');
		nb /= 10;
	}
	return (s);
}
