/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 00:16:46 by srheede           #+#    #+#             */
/*   Updated: 2018/05/27 00:16:52 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;

	while (*haystack != '\0')
	{
		i = 0;
		while (needle[i] == haystack[i] && needle[i] && haystack[i] && len--)
			i++;
		if (needle[i] == '\0')
			return ((char *) haystack);
		haystack++;
	}
	return (0);
}
