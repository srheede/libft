/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 20:38:17 by srheede           #+#    #+#             */
/*   Updated: 2018/05/26 15:08:45 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(char *src)
{
	char *dst;
	
	dst = (char *) malloc(sizeof(char) * ft_strlen(src) + 1);
	if (dst)
		ft_strcpy(dst, src);
	return (dst);
}
