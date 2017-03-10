/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrebeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 14:47:01 by vgrebeni          #+#    #+#             */
/*   Updated: 2017/01/18 14:47:01 by vgrebeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	const char *origstr;

	if (!str)
		return (0);
	origstr = str;
	while (*str != '\0')
		str++;
	return (str - origstr);
}
