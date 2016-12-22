/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgascoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:15:55 by tgascoin          #+#    #+#             */
/*   Updated: 2016/11/14 13:33:00 by tgascoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*fraiche;

	if (s1 && s2)
	{
		i = 0;
		j = 0;
		fraiche = (char*)malloc(sizeof(const char) * ((ft_strlen(s1) + \
						ft_strlen(s2)) + 1));
		if (fraiche == NULL)
			return (NULL);
		while (s1[i] != '\0')
		{
			fraiche[j] = s1[i];
			i++;
			j++;
		}
		i = 0;
		while (s2[i] != '\0')
			fraiche[j++] = s2[i++];
		fraiche[j] = '\0';
		return (fraiche);
	}
	return (NULL);
}
