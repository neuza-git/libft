/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgascoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:29:22 by tgascoin          #+#    #+#             */
/*   Updated: 2016/11/14 13:35:00 by tgascoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*fraiche;

	if (s)
	{
		i = 0;
		fraiche = (char*)malloc(sizeof(const char) * (ft_strlen((char*)s) + 1));
		if (fraiche == NULL)
			return (NULL);
		while (s[i] != '\0')
		{
			fraiche[i] = f(i, s[i]);
			i++;
		}
		fraiche[i] = '\0';
		return (fraiche);
	}
	return (NULL);
}
