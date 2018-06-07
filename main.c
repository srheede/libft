/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 08:24:01 by srheede           #+#    #+#             */
/*   Updated: 2018/05/31 23:15:02 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include <ctype.h>
#include "../includes/libft.h"

int		main(int argc, char **argv)
{
	int j;
	char *s;
	char *t;
	char *str;

	str = ft_strnew(11);

	j = 0;
		while (j < 10)
		{
			str[j] = ((char)(rand() % 10) + '0');
			j++;
		}
		str[11] = 0;
	if (argc > 1)
	{
        if (strcmp(argv[1], "atoi") == 0 && argc == 3)
			printf("\e[32mft_atoi = %d\n\e[36matoi = %d\n", ft_atoi(str), atoi(str));
        if (strcmp(argv[1], "bzero") == 0 && argc == 4)
        {
			s = argv[2];
			t = strdup(argv[2]);
            ft_bzero(s, atoi(argv[3]));
            bzero(t, atoi(argv[3]));
            printf("\e[32mft_bzero = %s\n\e[36mbzero = %s\n", s, t);
        }
        if (strcmp(argv[1], "isalpha") == 0 && argc == 3)
            printf("\e[32mft_isalpha = %d\n\e[36misalpha = %d\n", ft_isalpha(argv[2][0]), isalpha(argv[2][0]));
		if (strcmp(argv[1], "isalnum") == 0 && argc == 3)
            printf("\e[32mft_isalnum = %d\n\e[36misalnum = %d\n", ft_isalnum(argv[2][0]), isalnum(argv[2][0]));
        if (strcmp(argv[1], "isascii") == 0 && argc == 3)
            printf("\e[32mft_isascii = %d\n\e[36misascii = %d\n", ft_isascii(argv[2][0]), isascii(argv[2][0]));
        if (strcmp(argv[1], "isdigit") == 0 && argc == 3)
            printf("\e[32mft_isdigit = %d\n\e[36misdigit = %d\n", ft_isdigit(argv[2][0]), isdigit(argv[2][0]));
        if (strcmp(argv[1], "isprint") == 0 && argc == 3)
            printf("\e[32mft_isprint = %d\n\e[36misprint = %d\n", ft_isprint(argv[2][0]), isprint(argv[2][0]));
        if (strcmp(argv[1], "itoa") == 0 && argc == 3)
            printf("\e[32mft_itoa = %s\n", ft_itoa(atoi(argv[2])));
        if (strcmp(argv[1], "memchr") == 0 && argc == 5)
            printf("\e[32mft_memchr = %s\n\e[36mmemchr = %s\n", ft_memchr(argv[2], argv[3][0], atoi(argv[4])), memchr(argv[2], argv[3][0], atoi(argv[4])));		
        if (strcmp(argv[1], "memcmp") == 0 && argc == 5)
            printf("\e[32mft_memcmp = %d\n\e[36mmemcmp = %d\n", ft_memcmp(argv[2], argv[3], atoi(argv[4])), memcmp(argv[2], argv[3], atoi(argv[4])));
        if (strcmp(argv[1], "memcpy") == 0 && argc == 5)
        {
            s = (char *) malloc(sizeof(char) * ft_strlen(argv[3]));
            t = (char *) malloc(sizeof(char) * ft_strlen(argv[3]));
            printf("\e[32mft_memcpy = %s\n\e[36mmemcpy = %s\n", ft_memcpy(s, argv[3], atoi(argv[4])), memcpy(t, argv[3], atoi(argv[4])));
            free(s);
            free(t);
        }
		if (strcmp(argv[1], "memset") == 0 && argc == 5)
            printf("\e[32mft_memset = %s\n\e[36mmemset = %s\n", ft_memset(argv[2], argv[3][0], atoi(argv[4])), memset(argv[2], argv[3][0], atoi(argv[4])));
        if (strcmp(argv[1], "putchar") == 0 && argc == 3)
		{
            ft_putchar(argv[2][0]);
			putchar('\n');
			putchar(argv[2][0]);
			putchar('\n');
		}
		if (strcmp(argv[1], "putstr") == 0 && argc == 3)
            ft_putstr(argv[2]);
        if (strcmp(argv[1], "strcat") == 0 && argc == 4)
        {
            s = (char *) malloc(sizeof(char) * (ft_strlen(argv[2]) + ft_strlen(argv[3])));
            t = (char *) malloc(sizeof(char) * (ft_strlen(argv[2]) + ft_strlen(argv[3])));
            strcpy(s, argv[2]);
            strcpy(t, argv[2]);
            printf("\e[32mft_strcat = %s\n\e[36mstrcat = %s\n", ft_strcat(s, argv[3]), strcat(t, argv[3]));
            free(s);
            free(t);
        }
        if (strcmp(argv[1], "strchr") == 0 && argc == 4)
            printf("\e[32mft_strchr = %s\n\e[36mstrchr = %s\n", ft_strchr(argv[2], argv[3][0]), strchr(argv[2], argv[3][0]));
        if (strcmp(argv[1], "strcmp") == 0 && argc == 4)
            printf("\e[32mft_strcmp = %d\n\e[36mstrcmp = %d\n", ft_strcmp(argv[2], argv[3]), strcmp(argv[2], argv[3]));
        if (strcmp(argv[1], "strdup") == 0 && argc == 3)
            printf("\e[32mft_strdup = %s\n\e[36mstrdup = %s\n", ft_strdup(argv[2]), strdup(argv[2]));
        if (strcmp(argv[1], "strlcat") == 0 && argc == 5)
        {
            s = (char *) malloc(sizeof(char) * (ft_strlen(argv[2]) + ft_strlen(argv[3])));
            t = (char *) malloc(sizeof(char) * (ft_strlen(argv[2]) + ft_strlen(argv[3])));
            strcpy(s, argv[2]);
            strcpy(t, argv[2]);
            printf("\e[32mft_strlcat = %zu - %s\n\e[36mstrlcat = %zu - %s\n", ft_strlcat(s, argv[3], atoi(argv[4])), s, strlcat(t, argv[3], atoi(argv[4])), t);
            free(s);
            free(t);
        }
        if (strcmp(argv[1], "strlen") == 0 && argc == 3)
            printf("\e[32mft_strlen = %zu\n\e[36mstrlen = %zu\n", ft_strlen(argv[2]), strlen(argv[2]));
        if (strcmp(argv[1], "strlen_c") == 0 && argc == 4)
            printf("\e[32mft_strlen_c = %zu\n", ft_strlen_c(argv[2], argv[3][0]));
         if (strcmp(argv[1], "strncat") == 0 && argc == 5)
        {
            s = (char *) malloc(sizeof(char) * (ft_strlen(argv[2]) + ft_strlen(argv[3])));
            t = (char *) malloc(sizeof(char) * (ft_strlen(argv[2]) + ft_strlen(argv[3])));
            strcpy(s, argv[2]);
            strcpy(t, argv[2]);
            printf("\e[32mft_strncat = %s\n\e[36mstrncat = %s\n", ft_strncat(s, argv[3], atoi(argv[4])), strncat(t, argv[3], atoi(argv[4])));
            free(s);
            free(t);
        }
        if (strcmp(argv[1], "strncmp") == 0 && argc == 5)
            printf("\e[32mft_strncmp = %d\n\e[36mstrncmp = %d\n", ft_strncmp(argv[2], argv[3], atoi(argv[4])), strncmp(argv[2], argv[3], atoi(argv[4])));
        if (strcmp(argv[1], "strncpy") == 0 && argc == 5)
		{
			s = (char *) malloc(sizeof(char) * ft_strlen(argv[3]));
			t = (char *) malloc(sizeof(char) * ft_strlen(argv[3]));
            printf("\e[32mft_strncpy = %s\n\e[36mstrncpy = %s\n", ft_strncpy(s, argv[3], atoi(argv[4])), strncpy(t, argv[3], atoi(argv[4])));
			free(s);
			free(t);
		}
        if (strcmp(argv[1], "strnstr") == 0 && argc == 5)
            printf("\e[32mft_strnstr = %s\n\e[36mstrnstr = %s\n", ft_strnstr(argv[2], argv[3], atoi(argv[4])), strnstr(argv[2], argv[3], atoi(argv[4])));
        if (strcmp(argv[1], "strrchr") == 0 && argc == 4)
            printf("\e[32mft_strrchr = %s\n\e[36mstrrchr = %s\n", ft_strrchr(argv[2], argv[3][0]), strrchr(argv[2], argv[3][0]));
        if (strcmp(argv[1], "strsplit") == 0 && argc == 4)
		{
			char **arr;
			int i;

			i = 0;
			arr = ft_strsplit(argv[2], argv[3][0]);
            printf("\e[32mft_strsplit:\n");
			while (arr[i] != '\0')
			{
				printf("str%d = %s\n", i, arr[i]);
				i++;
			}
		}
        if (strcmp(argv[1], "strstr") == 0 && argc == 4)
            printf("\e[32mft_strstr = %s\n\e[36mstrstr = %s\n", ft_strstr(argv[2], argv[3]), strstr(argv[2], argv[3]));
        if (strcmp(argv[1], "strsub") == 0 && argc == 5)
            printf("\e[32mft_strsub = %s\n", ft_strsub(argv[2], atoi(argv[3]), atoi(argv[4])));
        if (strcmp(argv[1], "strtrim") == 0 && argc == 3)
            printf("\e[32mft_strtrim = %s\n", ft_strtrim(argv[2]));
        if (strcmp(argv[1], "tolower") == 0 && argc == 3)
            printf("\e[32mft_tolower = %c\n\e[36mtolower = %c\n", ft_tolower(argv[2][0]), tolower(argv[2][0]));
        if (strcmp(argv[1], "toupper") == 0 && argc == 3)
            printf("\e[32mft_toupper = %c\n\e[36mtoupper = %c\n", ft_toupper(argv[2][0]), toupper(argv[2][0]));
	}
	return (0);
}
