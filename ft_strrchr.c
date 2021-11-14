/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:27:58 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/01 12:28:00 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*st;
	int		i;

	st = (char *)str;
	i = ft_strlen(st);
	while (i >= 0)
	{
		if (st[i] == (unsigned char)c)
			return (st + i);
		i--;
	}
	return (NULL);
}

// int main(void)
// {
//     const char s[]="\0salam.sjbs.cm";
//     int c = '\0';
//     char *result;

//     result = ft_strrchr(s , c);
//     printf("%s" , result);
// }