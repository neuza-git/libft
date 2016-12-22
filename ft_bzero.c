/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgascoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 11:52:23 by tgascoin          #+#    #+#             */
/*   Updated: 2016/11/14 14:29:52 by tgascoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	if (n != 0)
	{
		i = 0;
		str = (char*)s;
		while (i < n)
		{
			str[i] = '\0';
			i++;
		}
		s = (void*)str;
	}
}