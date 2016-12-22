/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgascoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 12:14:26 by tgascoin          #+#    #+#             */
/*   Updated: 2016/11/18 11:22:49 by tgascoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*cdst;
	unsigned char	*csrc;
	size_t			i;
	unsigned char	cc;

	i = 0;
	cdst = (unsigned char*)dst;
	csrc = (unsigned char*)src;
	cc = (unsigned char)c;
	while (i < n)
	{
		cdst[i] = csrc[i];
		if (csrc[i] == cc)
			return (cdst + i + 1);
		i++;
	}
	return (NULL);
}
