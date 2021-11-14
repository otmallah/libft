/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:13:13 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/07 11:13:15 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;
	char	*to_find;

	str = (char *)s;
	to_find = (char *)find;
	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (i < len && str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0' && (i + j) < len)
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}

// int main(void)
// {
//     char *s1 = "MZIRIBMZIRIBMZE123";
//     char *s2 = "MZIRIBMZE";
//     size_t max = strlen(s2);
//     char *i1 = strnstr(s1, s2, max);
//     char *i2 = ft_strnstr(s1, s2, max);

//     printf("%s    %s" , i1,    i2);
// }