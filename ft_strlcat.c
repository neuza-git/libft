/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgascoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 11:23:21 by tgascoin          #+#    #+#             */
/*   Updated: 2016/11/24 14:20:57 by tgascoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	size_dst;
	size_t	size_src;

	i = 0;
	j = 0;
	size_dst = ft_strlen(dst);
	size_src = ft_strlen(src);
	if (size == 0)
		return (size_src);
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && i < (size - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (size_dst < size)
		return (size_dst + size_src);
	return (size + size_src);
}
