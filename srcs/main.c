/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srheede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 08:24:01 by srheede           #+#    #+#             */
/*   Updated: 2018/05/30 15:29:38 by srheede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> */
#include <libc.h>
#include <ctype.h>
#include "../includes/libft.h"

int		main(int argc, char **argv)
{
	char *s;
	char *t;

	if (argc > 1)
	{
        if (strcmp(argv[1], "atoi") == 0 && argc == 3)
			printf("\e[32mft_atoi = %d\n\e[36matoi = %d\n", ft_atoi(argv[2]), atoi(argv[2]));
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
            printf("\e[32mft_strlcat = %zu\n\e[36mstrlcat = %zu\n", ft_strlcat(s, argv[3], atoi(argv[4])), strlcat(t, argv[3], atoi(argv[4])));
            free(s);
            free(t);
        }
        if (strcmp(argv[1], "strlen") == 0 && argc == 3)
            printf("\e[32mft_strlen = %zu\n\e[36mstrlen = %zu\n", ft_strlen(argv[2]), strlen(argv[2]));
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
        if (strcmp(argv[1], "strstr") == 0 && argc == 4)
            printf("\e[32mft_strstr = %s\n\e[36mstrstr = %s\n", ft_strstr(argv[2], argv[3]), strstr(argv[2], argv[3]));
        if (strcmp(argv[1], "tolower") == 0 && argc == 3)
            printf("\e[32mft_tolower = %c\n\e[36mtolower = %c\n", ft_tolower(argv[2][0]), tolower(argv[2][0]));
        if (strcmp(argv[1], "toupper") == 0 && argc == 3)
            printf("\e[32mft_toupper = %c\n\e[36mtoupper = %c\n", ft_toupper(argv[2][0]), toupper(argv[2][0]));
		if (strcmp(argv[1], "atoi") == 0 && argc == 2)
		{
			printf("\e[01;33mFT_ATOI\n");
			usleep(100000);
			((ft_atoi(" -sfecf") == 0) &&
			(ft_atoi("+2798") == 2798) &&
			(ft_atoi("  \t\n  \r\r\v\f-899") == -899) &&
			(ft_atoi("+0089") == 89) &&
			(ft_atoi("-2147483648") == -2147483648) &&
			(ft_atoi("a56") == 0) &&
			(ft_atoi("    555 5555555555555555") == 555)) ? printf("\x1b[1;32m Passed all the above tests\n"):
			printf("\x1b[1;31mFiled one or more of the above tests\n");
			usleep(100000);
		}
		if (strcmp(argv[1], "bzero") == 0 && argc == 2)
		{
			char	b1[10], b2[10];

			bzero(b1, 10);
			bzero(b2, 10);

			printf("\e[01;33mFT_BZERO\n");
			usleep(100000);
			(memcmp(b1, b2, 10) == 0) ? printf("\x1b[1;32m Correct string memory compare\n"):
			printf("\x1b[1;31m Incorrect string memory compare\n");
			usleep(100000);
			b1[0] = 1;
			ft_bzero(b1, 0);
			(b1[0] == 1) ? printf("\x1b[1;32m Correct bzero\n"):
			printf("\x1b[1;31m Incorrect bzero\n");
			usleep(100000);
		}
		if (strcmp(argv[1], "isalnum") == 0 && argc == 2)
		{
			printf("\e[01;33mFT_ISALNUM\n");
			usleep(100000);
			((ft_isalnum(' ') == 0) &&
			(ft_isalnum('6') != 0) &&
			(ft_isalnum('Z') != 0) &&
			(ft_isalnum('5' + 0x100) == 0)) ? printf("\x1b[1;32m Passed all the above tests\n"):
			printf("\x1b[1;31mFiled one or more of the above tests\n\n");
			usleep(100000);
		}
		if (strcmp(argv[1], "isalpha") == 0 && argc == 2)
		{
			printf("\e[01;33mFT_ISALPHA\n");
			usleep(100000);
			((ft_isalpha('a') != 0) &&
			(ft_isalpha('a' + 0x100) == 0) &&
			(ft_isalpha('2') == 0) &&
			(ft_isalpha('Z') != 0) &&
			(ft_isalpha('t') != 0)) ? printf("\x1b[1;32m Passed all the above tests\n"):
			printf("\x1b[1;31mFiled one or more of the above tests\n\n");
			usleep(100000);
		}
		if (strcmp(argv[1], "isascii") == 0 && argc == 2)
		{
			printf("\e[01;33mFT_ISACSII\n");
			usleep(100000);
			((ft_isascii(200) == 0) &&
			(ft_isascii(0) != 0) &&
			(ft_isascii(127) != 0) ) ? printf("\x1b[1;32m Passed all the above tests\n"):
			printf("\x1b[1;31mFiled one or more of the above tests\n\n");
			usleep(100000);
		}
		if (strcmp(argv[1], "isdigit") == 0 && argc == 2)
		{
			printf("\e[01;33mFT_ISDIGIT\n");
			usleep(100000);
			((ft_isdigit(0) == 0) &&
			(ft_isdigit('8') != 0) &&
			(ft_isdigit('8' + 0x100) == 0)) ? printf("\x1b[1;32m Passed all the above tests\n"):
			printf("\x1b[1;31mFiled one or more of the above tests\n\n");
			usleep(100000);
		}
		if (strcmp(argv[1], "isprint") == 0 && argc == 2)
		{
			printf("\e[01;33mFT_ISPRINT\n");
			usleep(100000);
			((ft_isprint(0) == 0) &&
			(ft_isprint(127) == 0) &&
			(ft_isprint(' ') != 0) &&
			(ft_isprint('a') != 0) &&
			(ft_isprint(126) != 0)) ? printf("\x1b[1;32m Passed all the above tests\n"):
			printf("\x1b[1;31mFiled one or more of the above tests\n\n");
			usleep(100000);
		}
        if (strcmp(argv[1], "memset") == 0 && argc == 2)
		{
			char	b1[100], b2[100];

			printf("\e[01;33mFT_MEMSET\n");
			usleep(100000);
			ft_memset(b1, 42, 100);
			memset(b2, 42, 100);
			(memset(b1, 99, 0) == ft_memset(b1, 99, 0)) ? printf("\x1b[1;32m Correct memset test 1\n"):
			printf("\x1b[1;31m Incorrect memset test 1\n");
			usleep(100000);
			(memcmp(b1, b2, 100) == 0) ? printf("\x1b[1;32m Correct string memory compare\n"):
			printf("\x1b[1;31m Incorrect string memory compare\n");
			usleep(100000);
			b1[0] = 1;
			ft_memset(b1, 0, 0);
			(b1[0] == 1) ? printf("\x1b[1;32m Correct string memset test 2\n"):
			printf("\x1b[1;31m Incorrect string memset test 2\n");
			usleep(100000);
		}
		if (strcmp(argv[1], "strcat") == 0 && argc == 2)
		{
			char	buf[9];
			printf("\e[01;33mFT_STRCAT\n");
			usleep(100000);
			bzero(buf, 9);
			ft_strcat(buf, "Bon");
			ft_strcat(buf, "jour.");
			ft_strcat(buf, "");
			((strcmp(buf, "Bonjour.") == 0) && (buf == ft_strcat(buf, ""))) ? printf("\x1b[1;32m Passed all the above tests\n"):
			printf("\x1b[1;31mFiled one or more of the above tests\n");
			usleep(100000);
		}
		if (strcmp(argv[1], "strchr") == 0 && argc == 2)
		{
			char	buf[] = "Je suis un poisson.";
			printf("\e[01;33mFT_STRCHR\n");
			((strchr(buf, 'p') == ft_strchr(buf, 'p'))&&
			(strchr(buf, 0)== ft_strchr(buf, 0))&&
			(ft_strchr(buf, 'J') == buf)&&
			(ft_strchr(buf, 'z') == 0)) ? printf("\x1b[1;32m Passed all the above tests\n"):
			printf("\x1b[1;31mFiled one or more of the above tests\n");
			usleep(100000);
		}
		if (strcmp(argv[1], "strcmp") == 0 && argc == 2)
		{
			printf("\e[01;33mFT_STRCMP\n");
			usleep(100000);
			((ft_strcmp("abc", "abc")== 0)&&
			(ft_strcmp("abc", "abd") < 0) &&
			(ft_strcmp("a", "abcde")!= 0)) ? printf("\x1b[1;32m Passed all the above tests\n"):
			printf("\x1b[1;31mFiled one or more of the above tests\n");
			usleep(100000);
		}
        if (strcmp(argv[1], "strcpy") == 0 && argc == 2)
		{
			char	buf[6];
			printf("\e[01;33mFT_STRCPY\n");
			ft_strcpy(buf, "abcde");
			(strcmp(buf, "abcde") == 0) ? printf("\x1b[1;32m Passed all the above tests\n"):
			printf("\x1b[1;31mFiled one or more of the above tests\n");
			usleep(100000);
		}
        if (strcmp(argv[1], "strdup") == 0 && argc == 2)
		{
			char	*c;

			c = "AbC";
			printf("\e[01;33mFT_STRDUP\n");
			usleep(100000);
			(strcmp(ft_strdup("aaaaa"), "aaaaa")== 0) &&
			(strcmp(ft_strdup(""), "")== 0) &&
			(c != ft_strdup(c)) ? printf("\x1b[1;32m Passed all the above tests\n"):
			printf("\x1b[1;31mFiled one or more of the above tests\n");
			usleep(100000);
		}
		if (strcmp(argv[1], "strlen") == 0 && argc == 2)
		{
			printf("\e[01;33mFT_STRLEN\n");
			usleep(100000);
			((ft_strlen("chat") == strlen("chat")) &&
			(ft_strlen("") == strlen(""))) ? printf("\x1b[1;32m Passed all the above tests\n"):
			printf("\x1b[1;31mYou shouldn't even be failing\n");
			usleep(100000);
		}
		if (strcmp(argv[1], "strncat") == 0 && argc == 2)
		{
			char	buf[20];
			printf("\e[01;33mFT_STRNCAT\n");
			usleep(100000);
			strcpy(buf, "To be ");
			ft_strncat(buf, "or not to be", 6);
			(strcmp(buf, "To be or not")== 0)? printf("\e[1;32m Passed test 1\n"):
			printf("\e[1;31mFiled test 1\n");
			usleep(100000);
			ft_strncat(buf, "efefef", 0);
			(strcmp(buf, "To be or not")== 0)? printf("\e[1;32m Passed test 2\n"):
			printf("\e[1;31mFiled test 2\n");
			usleep(100000);
			(buf == ft_strncat(buf, "", 0)) ? printf("\e[1;32m Passed test 3\n"):
			printf("\e[1;31mFiled test 3\n");
			usleep(100000);
		}
		if (strcmp(argv[1], "strncmp") == 0 && argc == 2)
		{
			printf("\e[01;33mFT_STRNCMP\n");
			usleep(100000);
			(ft_strncmp("abc", "abcde",3)== 0)&&
			(ft_strncmp("abc", "abc\0defg", 100)== 0)&&
			(ft_strncmp("ab\0cde", "abcc\0e", 20) != 0) ? printf("\x1b[1;32m Passed all the above tests\n"):
			printf("\x1b[1;31mFiled one or more of the above tests\n");
			usleep(100000);
		}
		if (strcmp(argv[1], "strncpy") == 0 && argc == 2)
		{
			char	b[6];
			printf("\e[01;33mFT_STRNCPY\n");
			usleep(100000);
			ft_strncpy(b, "abc", 6);
			(memcmp(b, "abc\0\0", 6)== 0) ? printf("\e[1;32m Passed test 1\n"):
			printf("\e[1;31mFiled test 1\n");
			ft_strncpy(b, "abcdefghi", 6);
			(memcmp(b, "abcdefghi", 6)== 0) ? printf("\e[1;32m Passed test 2\n"):
			printf("\e[1;31mFiled test 2\n");
			usleep(100000);
		}
		if (strcmp(argv[1], "strnstr") == 0 && argc == 2)
		{
			char	buf[10];
			printf("\e[01;33mFT_STRNSTR\n");
			usleep(100000);
			bzero(buf, 10);
			strcpy(buf, "un deux 9");
			(strnstr(buf, "deux", 10) == ft_strnstr(buf, "deux", 10))? printf("\e[1;32m Passed test 1\n"):
			printf("\e[1;31mFiled test 1\n");
			usleep(100000);
			(strnstr(buf, "9", 3) == ft_strnstr(buf, "9", 3))? printf("\e[1;32m Passed test 2\n"):
			printf("\e[1;31mFiled test 2\n");
			usleep(100000);
			(ft_strnstr(buf, "", 6) == buf)? printf("\e[1;32m Passed test 3\n"):
			printf("\e[1;31mFiled test 3\n");
			usleep(100000);
			(ft_strnstr(buf, "deux" ,5)== strnstr(buf, "deux", 5))? printf("\e[1;32m Passed test 4\n"):
			printf("\e[1;31mFiled test 4\n");
			usleep(100000);
			(ft_strnstr(buf, "9", 10) == strnstr(buf, "9", 10))? printf("\e[1;32m Passed test 5\n"):
			printf("\e[1;31mFiled test 5\n");
			usleep(100000);
			buf[9] = '6';
			(strnstr(buf, "cinq", 10) == ft_strnstr(buf, "cinq", 10))? printf("\e[1;32m Passed test 6\n"):
			printf("\e[1;31mFiled test 6\n");
			usleep(100000);
			(strnstr(buf, "deux", 10) == ft_strnstr(buf, "deux", 10))? printf("\e[1;32m Passed test 7\n"):
			printf("\e[1;31mFiled test 7\n");
			usleep(100000);
			(strnstr(buf, "9682", 10) == ft_strnstr(buf, "9682", 10))? printf("\e[1;32m Passed test 8\n"):
			printf("\e[1;31mFiled test 8\n");
			usleep(100000);
			(strnstr(buf, "6", 10) == ft_strnstr(buf, "6", 10))? printf("\e[1;32m Passed test 9\n"):
			printf("\e[1;31mFiled test 9\n");
			usleep(100000);
			buf[1] = 0;
			(strnstr(buf, "deux", 10) == ft_strnstr(buf, "deux", 10))? printf("\e[1;32m Passed test 10\n"):
			printf("\e[1;31mFiled test 10\n");
			usleep(100000);
		}
		if (strcmp(argv[1], "strrchr") == 0 && argc == 2)
		{
			char	buf[] = "abcdedcba";
			printf("\e[01;33mFT_STRRCHR\n");
			usleep(100000);
			(strrchr(buf, 'a') == ft_strrchr(buf, 'a'))? printf("\e[1;32m Passed test 1\n"):
			printf("\e[1;31mFiled test 1\n");
			usleep(100000);
			(strrchr(buf, 0) == ft_strrchr(buf, 0))? printf("\e[1;32m Passed test 2\n"):
			printf("\e[1;31mFiled test 2\n");
			usleep(100000);
			(ft_strrchr(buf, 'z') == 0)? printf("\e[1;32m Passed test 3\n"):
			printf("\e[1;31mFiled test 3\n");
			usleep(100000);
			buf[5] = 0;
			(ft_strrchr(buf, 'a') == buf)? printf("\e[1;32m Passed test 4\n"):
			printf("\e[1;31mFiled test 4\n");
			usleep(100000);
		}
		if (strcmp(argv[1], "strstr") == 0 && argc == 2)
		{
			char	buf[] = "Ceci n'est pas une pipe.";
			printf("\e[01;33mFT_STRSTR\n");
			usleep(100000);
			(strstr(buf, "une")== ft_strstr(buf, "une"))&&
			(strstr(buf, "")== ft_strstr(buf, ""))&&
			(strstr(buf, "aaaaa")== ft_strstr(buf, "aaaaa"))&&
			(ft_strstr(buf, "BWAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA")== NULL) ? printf("\x1b[1;32m Passed all the above tests\n"):
			printf("\x1b[1;31mFiled one or more of the above tests\n");
			usleep(100000);
		}
		if (strcmp(argv[1], "tolower") == 0 && argc == 2)
		{
			printf("\e[01;33mFT_TOLOWER\n");
			usleep(100000);
			((ft_tolower('T') == 't') &&
			(ft_tolower(99999) == 99999) &&
			(ft_tolower('e') == 'e')) ? printf("\x1b[1;32m Passed all the above tests\n"):
			printf("\x1b[1;31mFiled one or more of the above tests\n");
			usleep(100000);
		}
		if (strcmp(argv[1], "toupper") == 0 && argc == 2)
		{
			printf("\e[01;33mFT_TOUPPER\n");
			usleep(100000);
			((ft_toupper('a') == 'A') &&
			(ft_toupper(12345) == 12345) &&
			(ft_toupper(' ') == ' ') &&
			(ft_toupper('Z') == 'Z')) ? printf("\x1b[1;32m Passed all the above tests\n"):
			printf("\x1b[1;31mFiled one or more of the above tests\n\n");
			usleep(100000);
		}
	}
	return (0);
}
