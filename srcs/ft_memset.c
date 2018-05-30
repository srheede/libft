/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 11:33:56 by srheede           #+#    #+#             */
/*   Updated: 2018/05/23 12:09:04 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *buffer;

	buffer = (unsigned char *)b;
	while (len--)
	{
		*buffer = (unsigned char)c;
		buffer++;
	}
	return (b);
}
