/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalache <dgalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 22:20:35 by dgalache          #+#    #+#             */
/*   Updated: 2020/07/13 13:15:49 by dgalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		countbrackets(const char *s, char separator)
{
	int			total;
	const char	*cs;

	cs = s;
	total = 0;
	while (*s == separator)
		s++;
	while (*s)
	{
		if (*(s + 1) && (*(s - 1) == separator || s == cs) && *s != separator)
			total++;
		s++;
	}
	return (total);
}

int		lenbracket(const char *s, char separator)
{
	int total;

	total = 0;
	while (*s && *s++ != separator)
		total++;
	return (total);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	char	*pt;
	int		i;
	int		brackets;
	int		lbracket;

	i = 0;
	brackets = countbrackets(s, c);
	if (!(ptr = (char **)malloc(sizeof(char *) * brackets + 1)))
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			lbracket = lenbracket(s, c);
			pt = strndup(s, lbracket);
			ptr[i] = pt;
			i++;
			s += lbracket;
		}
		else
			s++;
	}
	ptr[i] = 0;
	return (ptr);
}
