/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 17:12:08 by srheede           #+#    #+#             */
/*   Updated: 2018/05/27 01:22:04 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_atoi(const char *str)
{
	int				i;
	unsigned int	j;
	unsigned int	digit;

	j = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		i = 1;
		str++;
	}
	else
	{
		i = 0;
		if (*str == '+')
			str++;
	}
	while (str)
	{
		digit = *str - '0';
		if (digit > 9)
			break ;
		j = (10 * j) + digit;
		if (j == 2147483648 && i)
			return (-2147483648);
		if (j > 2147483647)
		{
			if (i)	
				return (0);
			if (!i)
				return (-1);
		}
		str++;
	}
	if (i)
		j *= -1;
	return (j);
}
