/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgascoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 13:37:48 by tgascoin          #+#    #+#             */
/*   Updated: 2016/11/14 13:34:09 by tgascoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*fraiche;

	if (s)
	{
		i = 0;
		fraiche = (char*)malloc(sizeof(const char) * (ft_strlen(s) + 1));
		if (fraiche == NULL)
			return (NULL);
		while (s[i] != '\0')
		{
			fraiche[i] = f(s[i]);
			i++;
		}
		fraiche[i] = '\0';
		return (fraiche);
	}
	return (NULL);
}
