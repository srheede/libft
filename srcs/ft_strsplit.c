/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 22:00:46 by srheede           #+#    #+#             */
/*   Updated: 2018/05/31 13:38:45 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_arr_size(char const *s, char c)
{
    int i;
    int j;

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
    return (j);
}

char	**ft_strsplit(char const *s, char c)
{
	char **arr;
	int i;
	int j;

	if (s)
	{
		i = 0;
		j = 0;
		arr = (char **)malloc(sizeof(char *) * ft_arr_size(s, c));
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
		return (arr);
	}
	return (NULL);
}
