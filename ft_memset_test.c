/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <ahrytsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 21:26:53 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/11/06 19:12:04 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <pthread.h>
 
void	ft_memset_test()
{
	char test_ar[] = "eto fiasko bratan";
	printf("\n\t\t\e[31mFT_MEMSET_TEST\e[0m\t");
	ft_memset(test_ar, 'O', 8);
    ft_memset(test_ar + 8, 'K', 9);
    if (!memcmp(test_ar, "OOOOOOOOKKKKKKKKK", 17))
        printf("\t\e[30;42mOK");
    else
        printf("\t\e[30;43mEto fiasko bratan");
    printf("\e[0m\n\n");
}

void	ft_bzero_test()
{
    char test_ar[] = "eto fiasko bratan";
	printf("\t\t\e[31mFT_BZERO_TEST\e[0m\t");
    ft_bzero(test_ar, 18);
	if (!*test_ar)
		printf("\t\e[30;42mOK");
	else
		printf("\t\e[30;43mEto fiasko bratan");
	printf("\e[0m\n\n");
}

void ft_memcpy_test()
{
    char test_ar1[] = "eto fiasko bratan";
    char test_ar2[] = "eto fiasko bratan";
    printf("\t\t\e[31mFT_MEMCPY_TEST\e[0m\t");
	memcpy(test_ar1, "jopa", 4);
	ft_memcpy(test_ar2, "jopa", 4);
	if (!memcmp(test_ar1, test_ar2, 18))
        printf("\t\e[30;42mOK");
    else
        printf("\t\e[30;43mEto fiasko bratan");
    printf("\e[0m\n\n");
}

void ft_memccpy_test()
{
    char test_ar1[] = "eto fiasko bratan";
    char test_ar2[] = "eto fiasko bratan";
    printf("\t\t\e[31mFT_MEMCCPY_TEST\e[0m\t");
    memccpy(test_ar1, "test string", ' ', 4);
    ft_memccpy(test_ar2, "test string", ' ', 4);
    if (!memcmp(test_ar1, test_ar2, 18))
        printf("\t\e[30;42mOK");
    else
        printf("\t\e[30;43mEto fiasko bratan");
    printf("\e[0m\n\n");
}

void ft_memmove_test()
{
    char dst1[] = "eto fiasko bratan";
    char dst2[] = "eto fiasko bratan";
    printf("\t\t\e[31mFT_MEMMOVE_TEST\e[0m\t");
    memmove(dst1, dst1 + 5, 17);
    ft_memmove(dst2, dst2 + 5, 17);
	memmove(dst1 + 7, dst1, 10);
    ft_memmove(dst2 +7, dst2, 10);
    if (!memcmp(dst1, dst2, 18))
        printf("\t\e[30;42mOK");
    else
        printf("\t\e[30;43mEto fiasko bratan");
    printf("\e[0m\n\n");
}

void ft_memchr_test()
{
    char str[] = "eto fiasko bratan";
    printf("\t\t\e[31mFT_MEMCHR_TEST\e[0m\t");
    if (memchr(str, 'a', 18) == ft_memchr(str, 'a', 18))
        printf("\t\e[30;42mOK");
    else
        printf("\t\e[30;43mEto fiasko bratan");
    printf("\e[0m\n\n");
}

void ft_memcmp_test()
{
	char *str1;
	char *str2;

	str1 = strdup("\200"); 
	str2 = strdup("\200");
    printf("\t\t\e[31mFT_MEMCMP_TEST\e[0m\t");
    if (memcmp(str1, str2, 2) == ft_memcmp(str1, str2, 2))
        printf("\t\e[30;42mOK\e[0m");
    else
		printf("\t\e[30;43mEto fiasko bratan\e[0m");
	char s12[11] = "lox mydak";
	char s13[12] = "lox mydai";
	int n1 = memcmp(s12, s13, 9), n2 = ft_memcmp(s12, s13, 9);
	if (n1 == n2)
        printf("\t\e[30;42mOK\e[0m");
    else
		printf("\t\e[30;43mEto fiasko bratan\e[0m");
	str1 = strdup("lox mydak");
    str2 = strdup("lox mydak");
	if (memcmp(str1, str2, 10) == ft_memcmp(str1, str2, 10))
        printf("\t\e[30;42mOK\e[0m");
    else
        printf("\t\e[30;43mEto fiasko bratan\e[0m");
		printf("\e[0m\n\n");
}

void ft_strlen_test()
{
    printf("\t\t\e[31mFT_STRLEN_TEST\e[0m\t");
    if (strlen("dfyjfrfafgeh") == ft_strlen("dfyjfrfafgeh"))
        printf("\t\e[30;42mOK\e[0m");
    else
        printf("\t\e[30;43mEto fiasko bratan\e[0m");
    if (strlen("") == ft_strlen(""))
        printf("\t\e[30;42mOK\e[0m");
    else
        printf("\t\e[30;43mEto fiasko bratan\e[0m");
	printf("\e[0m\n\n");
}

void ft_strdup_test()
{
    printf("\t\t\e[31mFT_STRDUP_TEST\e[0m\t");
	char *s1 = strdup("sgfghdrd eggsfvs");
	char *s2 = ft_strdup("sgfghdrd eggsfvs");
    if (!strcmp(s1, s2))
        printf("\t\e[30;42mOK\e[0m");
    else
        printf("\t\e[30;43mEto fiasko bratan\e[0m");
    printf("\e[0m\n\n");
}

void ft_strcpy_test()
{
    printf("\t\t\e[31mFT_STRCPY_TEST\e[0m\t");
    char *s1 = strdup("sgfghdrd eggsfvssssss");
    char *s2 = ft_strdup("sgfghdrd eggsfvssssss");
	strcpy(s1, "petrosyan krasavs");
	ft_strcpy(s2, "petrosyan krasavs");
    if (!strcmp(s1, s2))
        printf("\t\e[30;42mOK\e[0m");
    else
        printf("\t\e[30;43mEto fiasko bratan\e[0m");
    printf("\e[0m\n\n");
}

void ft_strncpy_test()
{
    printf("\t\t\e[31mFT_STRNCPY_TEST\e[0m\t");
    char *s1 = strdup("sgfghdrd eggsfvssssss");
    char *s2 = ft_strdup("sgfghdrd eggsfvssssss");
    strncpy(s1, "petrosyan krasavs", 7);
    ft_strncpy(s2, "petrosyan krasavs", 7);
    if (!strcmp(s1, s2))
        printf("\t\e[30;42mOK\e[0m");
    else
        printf("\t\e[30;43mEto fiasko bratan\e[0m");
    printf("\e[0m\n\n");
}

void ft_strcat_test()
{
    printf("\t\t\e[31mFT_STRCAT_TEST\e[0m\t");
    char s1[150] = "sgfghdrd eggsfvssssss\0";
    char s2[150] = "sgfghdrd eggsfvssssss\0";
    strcat(s1, "petrosyan krasavs");
    ft_strcat(s2, "petrosyan krasavs");
    if (!strcmp(s1, s2))
        printf("\t\e[30;42mOK\e[0m");
    else
        printf("\t\e[30;43mEto fiasko bratan\e[0m");
    printf("\e[0m\n\n");
}

void ft_strncat_test()
{
    printf("\t\t\e[31mFT_STRNCAT_TEST\e[0m\t");
    char s1[150] = "sgfghdrd eggsfvssssss\0";
    char s2[150] = "sgfghdrd eggsfvssssss\0";
    strncat(s1, "petrosyan krasavs", 7);
    ft_strncat(s2, "petrosyan krasavs", 7);
    if (!strcmp(s1, s2))
        printf("\t\e[30;42mOK\e[0m");
    else
        printf("\t\e[30;43mEto fiasko bratan\e[0m");
    printf("\e[0m\n\n");
}



int		main()
{
	printf("\n\t\t\t\e[1;35mSIMPLE_TESTER by ahrytsen\e[0m\n\n");
	ft_memset_test();
	ft_bzero_test();
	ft_memcpy_test();
	ft_memccpy_test();
	ft_memmove_test();
	ft_memchr_test();
	ft_memcmp_test();
	ft_strlen_test();
	ft_strdup_test();
	ft_strcpy_test();
	ft_strncpy_test();
	ft_strcat_test();
    ft_strncat_test();
}
