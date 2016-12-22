/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgascoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:15:30 by tgascoin          #+#    #+#             */
/*   Updated: 2016/11/14 13:41:05 by tgascoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	if (s)
	{
		i = 0;
		new = (char*)malloc(sizeof(char) * (len + 1));
		if (new == NULL)
			return (NULL);
		while (len > 0)
		{
			new[i] = s[start];
			i++;
			len--;
			start++;
		}
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}
