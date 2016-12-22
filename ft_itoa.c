/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgascoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 15:17:07 by tgascoin          #+#    #+#             */
/*   Updated: 2016/11/14 13:31:55 by tgascoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static int	ft_get_length(int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (n < 0)
	{
		j++;
		n = -n;
	}
	while (n > 9)
	{
		i++;
		n = n / 10;
	}
	return (i + j);
}

char		*ft_itoa(int n)
{
	int		tmp;
	int		i;
	int		nb;
	char	*new;

	nb = n;
	i = ft_get_length(n);
	tmp = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	new = (char*)malloc(sizeof(char) * (ft_get_length(nb) + 2));
	if (new == NULL)
		return (NULL);
	if (n < 0)
		n = -n;
	while (i >= 0)
	{
		new[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	new[ft_get_length(nb) + 1] = '\0';
	if (nb < 0)
		new[0] = '-';
	return (new);
}
