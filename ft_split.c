/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 21:38:07 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/14 21:38:11 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size(const char	*s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			j++;
			i--;
		}
		i++;
	}
	return (j);
}

static void	check_p(const char *st, int num, char sep, char **tab)
{
	int	start;
	int	b;
	int	i;

	i = 0;
	start = 0;
	b = 0;
	while (i < num)
	{
		while (st[b] == sep)
			b++;
		start = b;
		while (st[b] != sep && st[b])
			b++;
		tab[i] = ft_substr(st, start, (b - start));
		i++;
	}
	tab[i] = NULL;
}

char	**ft_split(const char *s, char l)
{
	char	**tab;
	int		num_str;

	if (!s)
		return (NULL);
	num_str = size(s, l);
	tab = (char **)malloc(sizeof(char *) * (num_str + 1));
	if (!tab)
		return (NULL);
	check_p(s, num_str, l, tab);
	return (tab);
}
