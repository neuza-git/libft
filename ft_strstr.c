/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgascoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 13:44:18 by tgascoin          #+#    #+#             */
/*   Updated: 2016/11/14 13:40:23 by tgascoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strstr(const char *big, const char *little)
{
	int ibg;
	int ilt;
	int tc;

	ibg = 0;
	ilt = 0;
	if (little[ilt] == '\0')
		return ((char*)big);
	while (big[ibg] != '\0')
	{
		tc = ibg;
		while (big[ibg] == little[ilt])
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
