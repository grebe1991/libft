/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrebeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 14:39:54 by vgrebeni          #+#    #+#             */
/*   Updated: 2017/01/18 14:39:55 by vgrebeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *mem;

	mem = malloc(size);
	if (mem == NULL)
		return (NULL);
	else
		return (ft_memset(mem, 0, size));
}
