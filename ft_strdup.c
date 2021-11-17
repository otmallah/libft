/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:29:42 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/01 16:29:48 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*se;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	se = (char *)malloc((i + 1) * sizeof(char));
	if (!se)
		return (NULL);
	while (str[j])
	{
		se[j] = str[j];
		j++;
	}
	se[j] = '\0';
	return (se);
}
