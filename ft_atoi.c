/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgascoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 15:34:18 by tgascoin          #+#    #+#             */
/*   Updated: 2016/11/18 12:57:14 by tgascoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		ft_atoi(const char *str)
{
	int i;
	int nb;
	int negative;

	i = 0;
	nb = 0;
	negative = 0;
	if (str[i] == '\a')
		return (0);
	while (ft_isescape(str[i]) && str[i] != '\0')
		i++;
	if ((str[i] == '+' || str[i] == '-') && (str[i + 1] != '+' \
				|| str[i + 1] != '-'))
		negative = (str[i++] == '-') ? 1 : 0;
	while (ft_isdigit(str[i]))
	{
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	if (negative == 1)
		nb = -nb;
	return (nb);
}
