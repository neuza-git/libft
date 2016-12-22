/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgascoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 09:54:28 by tgascoin          #+#    #+#             */
/*   Updated: 2016/11/26 14:11:01 by tgascoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	int				j;
	unsigned char	cc;

	cc = (unsigned char)c;
	i = (int)ft_strlen(s);
	j = i;
	while (i >= 0 && s[i] != cc)
		i--;
	if (s[i] != cc)
		return (NULL);
	return ((char*)s + (i));
}
