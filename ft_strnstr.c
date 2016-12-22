/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgascoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 11:06:45 by tgascoin          #+#    #+#             */
/*   Updated: 2016/11/14 14:02:47 by tgascoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	ibg;
	size_t	ilt;
	size_t	tc;

	i = 0;
	ibg = 0;
	ilt = 0;
	if (little[ilt] == '\0')
		return ((char*)big);
	while (big[ibg] != '\0' && i < len && ibg < len)
	{
		tc = ibg;
		while (big[ibg] == little[ilt] && ibg < len)
		{
			ilt++;
			ibg++;
			if (little[ilt] == '\0' && little[ilt - 1] == big[ibg - 1])
				return ((char*)big + tc);
		}
		ilt = 0;
		ibg = tc;
		ibg++;
	}
	return (NULL);
}
