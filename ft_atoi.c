/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrebeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 14:30:39 by vgrebeni          #+#    #+#             */
/*   Updated: 2017/01/18 14:30:48 by vgrebeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return ((9 <= c && c <= 13) || c == 32);
}

int			ft_isnegativ(int sgn, int n)
{
	if (sgn == 1)
		return (-n);
	else
		return (n);
}

int			ft_atoi(const char *str)
{
	long	n;
	int		isneg;

	isneg = 0;
	n = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		isneg = 1;
		str++;
	}
	while (*str != '\0' && ft_isdigit(*str))
	{
		n = n * 10 + (*str++ - '0');
		if (n > 2147483647 && isneg == 0)
			return (-1);
		if (n > 2147483648 && isneg == 1)
			return (0);
	}
	return (ft_isnegativ(isneg, n));
}
