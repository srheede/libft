/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 20:40:01 by srheede           #+#    #+#             */
/*   Updated: 2018/05/30 21:57:07 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrim(char const *s)
{
	int i;
	int j;
	char *buffer;

	if (s)
	{
		i = 0;
		j = ft_strlen(s) - 1;
		while (ft_isspace(s[i]) && s[i] != '\0')
			i++;
		while (ft_isspace(s[j]) && j > 0)
			j--;
		j = j - i + 1;
		if (j <= 0)
			return ("");
		buffer = ft_memalloc(j + 1);
		if (!buffer || j <= 0)
			return (NULL);
		ft_strncpy(buffer, &s[i], j);
		return (buffer);
	}
	return (NULL);
}
