/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalache <dgalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 22:20:35 by dgalache          #+#    #+#             */
/*   Updated: 2020/07/17 13:27:06 by dgalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		countbrackets(const char *s, char separator)
{
	int	comp;
	int	cles;

	comp = 0;
	cles = 0;
	if (*s == '\0')
		return (0);
	while (*s != '\0')
	{
		if (*s == separator)
			cles = 0;
		else if (cles == 0)
		{
			cles = 1;
			comp++;
		}
		s++;
	}
	return (comp);
}

static int		lenbracket(const char *s, char separator)
{
	int total;

	total = 0;
	while (*s && *s++ != separator)
		total++;
	return (total);
}

static void		*ft_free_str(char **strs, int j)
{
	while (j > 0)
	{
		j--;
		free((void *)strs[j]);
	}
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
	if (!s || (!(ptr = (char **)malloc(sizeof(char *) * (brackets + 1)))))
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			lbracket = lenbracket(s, c);
			if (!(pt = ft_strndup(s, lbracket)))
				return (ft_free_str(ptr,i));
			ptr[i++] = pt;
			s += lbracket;
		}
		else
			s++;
	}
	ptr[i] = 0;
	return (ptr);
}
