/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrebeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 14:39:35 by vgrebeni          #+#    #+#             */
/*   Updated: 2017/01/18 14:39:38 by vgrebeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *strsrc;
	char *strdst;

	strsrc = (char*)src;
	strdst = (char*)dst;
	if (strsrc < strdst)
	{
		strsrc = strsrc + len - 1;
		strdst = strdst + len - 1;
		while (len > 0)
		{
			*strdst-- = *strsrc--;
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			*strdst++ = *strsrc++;
			len--;
		}
	}
	return (dst);
}
