/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:13:21 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/01 12:13:22 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*st;

	st = (char *)str;
	i = 0;
	while (st[i])
	{
		if (st[i] == (unsigned char)c)
			return (st + i);
		i++;
	}
	if (st[i] == (unsigned char)c)
		return (st + i);
	else
		return (NULL);
}

// int main(void)
// // {
// //     char s[]="0salam0comkdkg0jhh";
// //     int c = '0';
// //     char *result;

// //     result = ft_strchr(s , c);
// //     printf("%s" , result);
// // }