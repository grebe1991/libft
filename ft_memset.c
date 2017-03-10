/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrebeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 14:40:23 by vgrebeni          #+#    #+#             */
/*   Updated: 2017/01/18 14:40:23 by vgrebeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *in, int data, size_t len)
{
	unsigned char *ptr;

	if (!in)
		return (0);
	ptr = (unsigned char*)in;
	while (len-- > 0)
		*ptr++ = (unsigned char)data;
	return (in);
}
