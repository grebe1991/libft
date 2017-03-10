/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrebeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 14:47:42 by vgrebeni          #+#    #+#             */
/*   Updated: 2017/01/18 14:47:43 by vgrebeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strndup(const char *s1, size_t n)
{
	char	*s2;

	s2 = (char*)malloc(sizeof(char) * (n + 1));
	if (s2 == NULL)
		return (NULL);
	else
		return (ft_strncpy(s2, s1, n));
}
