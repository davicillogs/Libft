/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalache <dgalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 22:20:35 by dgalache          #+#    #+#             */
/*   Updated: 2020/07/17 01:34:48 by dgalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		countbrackets(const char *s, char separator)
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

static int		lenbracket(const char *s, char separator)
{
	int total;

	total = 0;
	while (*s && *s++ != separator)
		total++;
	return (total);
}

static void		*ft_strsdestroy(char **strs)
{
	int	i;

	i = -1;
	while (strs[++i] != NULL)
		free(strs[i]);
	free(strs);
	return (NULL);
}

char			**ft_split(char const *s, char c)
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
			if (!(pt = ft_strndup(s, lbracket)))
				return (ft_strsdestroy(ptr));
			ptr[i++] = pt;
			s += lbracket;
		}
		else
			s++;
	}
	ptr[i] = 0;
	return (ptr);
}
