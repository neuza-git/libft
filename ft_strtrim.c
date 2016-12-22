/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgascoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:43:39 by tgascoin          #+#    #+#             */
/*   Updated: 2016/11/14 13:41:31 by tgascoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static int	ft_get_size(char const *str)
{
	int i;
	int j;
	int str_size;

	i = 0;
	j = 0;
	str_size = (int)ft_strlen(str);
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	j = str_size - 1;
	while (str[j] == ' ' || str[j] == '\n' || str[j] == '\t')
		j--;
	j = str_size - j - 1;
	if ((str_size - (j + i)) < 0)
		return (0);
	return (str_size - (j + i));
}

char		*ft_strtrim(char const *s)
{
	char	*new;
	int		i;
	int		j;
	int		k;

	if (s)
	{
		i = 0;
		k = 0;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		j = (int)ft_strlen(s) - 1;
		while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
			j--;
		new = (char*)malloc(sizeof(char) * (ft_get_size(s) + 1));
		if (new == NULL)
			return (NULL);
		while (i <= j)
			new[k++] = s[i++];
		new[k] = '\0';
		return (new);
	}
	return (NULL);
}
