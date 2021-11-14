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

int	size(const char	*s, char c)
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
			i--;
			j++;
		}
		i++;
	}
	return (j);
}

void	check_p(const char *st, int num, char sep, char **tab)
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
/*int     main(void)
{
		char    **c;
		int        i;
		const char    t[] = "--1-2--3---n-aqt--5-----42";
		char    sep = '-';
		c = ft_split(t, sep);
		i = 0;
		while (c[i])
		{
				printf("(%s)\n", c[i]);
				i++;
		}
}*/
