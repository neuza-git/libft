/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgascoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:23:32 by tgascoin          #+#    #+#             */
/*   Updated: 2016/11/14 13:49:27 by tgascoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static void	*ft_rev_memcpy(void *dst, const void *src, size_t n)
{
	int				i;
	unsigned char	*csrc;
	unsigned char	*cdst;

	csrc = (unsigned char*)src;
	cdst = (unsigned char*)dst;
	i = n - 1;
	while (i >= 0)
	{
		cdst[i] = csrc[i];
		i--;
	}
	dst = (void*)cdst;
	return (dst);
}

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	if (src < dst)
		ft_rev_memcpy(dst, src, len);
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
