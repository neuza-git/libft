/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgascoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:52:05 by tgascoin          #+#    #+#             */
/*   Updated: 2016/11/21 13:36:10 by tgascoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	if (s1 && s2)
	{
		if (n == 0)
			return (1);
		i = 0;
		while ((s1[i] || s2[i]) && i < (n - 1))
		{
			if (s1[i] != s2[i])
				return (0);
			i++;
		}
		if (s1[i] == s2[i])
			return (1);
	}
	return (0);
}
