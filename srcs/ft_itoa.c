/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 14:46:53 by srheede           #+#    #+#             */
/*   Updated: 2018/05/30 16:48:56 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

int		ft_getlen(int n)
{
	int i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*str;

	if (n == -2147483648)
		return ("-2147483648");
	i = ft_getlen(n);
	str = ft_memalloc(i);
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	j = i;
	while (i > 0)
	{
		str[i - 1] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	str[j] = '\0';
	return (str);
}
