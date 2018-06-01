/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 22:00:46 by srheede           #+#    #+#             */
/*   Updated: 2018/06/01 12:57:25 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_arr_size(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			i = i + ft_strlen_c(&s[i], c) - 1;
			j++;
		}
		i++;
	}
	if (!j)
		j++;
	ft_putnbr(j);
	return (j);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;

	if (s)
	{
		i = 0;
		j = 0;
		arr = (char **)malloc(sizeof(char *) * ft_arr_size(s, c) + 1);
		if (!(arr))
			return (NULL);
		while (s[i] != '\0')
		{
			if (s[i] != c)
			{
				arr[j] = ft_strsub(s, i, ft_strlen_c(&s[i], c));
				i = i + ft_strlen_c(&s[i], c) - 1;
				j++;
			}
			i++;
		}
		if (!j)
		{
			arr[0] = ft_strsub(s, 0, 0);
			arr[1] = NULL;
		}
		arr[j] = NULL;
		return (arr);
	}
	return (NULL);
}
