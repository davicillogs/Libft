/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalache <dgalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 18:28:05 by dgalache          #+#    #+#             */
/*   Updated: 2020/07/03 21:51:24 by dgalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memset.c"
#include "ft_bzero.c"
#include "ft_memcpy.c"
#include "ft_strchr.c"
#include "ft_strlen.c"
#include "ft_strncmp.c"
#include "ft_strrchr.c"
#include "ft_tolower.c"
#include "ft_toupper.c"
#include "ft_strcount.c"
#include "ft_strtrim.c"
#include <stdio.h>
#include <string.h>

int main ()
{
	char A[] = "AAAAACAAAAAACA";
	//printf("FT_MEMSET -> %s\n", ft_memset(prueba,'c',3));
	//ft_bzero(prueba,1);
	//printf("FT_BZERO ->%s\n",prueba);
	//printf("FT_MEMCPY -> %s\n", ft_memcpy(A,"ccc",3));
	//printf("MEMCPY -> %s\n" , memcpy(A,"ccc",3));
	//printf("STRCHR->%s\n", strchr(A,'F'));
	//printf("FT_STRCHR->%s\n", ft_strchr(A,'F'));
	//printf("STRCHR->%s\n", strrchr(A,'F'));
	//printf("FT_STRCHR->%s\n", ft_strrchr(A,'F'));
	//printf("atoi -> %d\n" , atoi("    	+3243as23"));
	printf("TOLOWER ->%c\n" , tolower('A'));
	printf("FT_TOLOWER ->%c\n" , ft_tolower('A'));

	printf("TOUPPER ->%c\n" , toupper('A'));
	printf("FT_TOUPPER ->%c\n" , ft_toupper('A'));

	printf("ft_strcount -> %d\n" , ft_strcount("",""));
	//printf("ft_strtrim -> %s\n" , ft_strtrim(" ASDASDASDASD  ", " "));
}
