/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:57:45 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/01 13:57:47 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*st;
	size_t			i;
	unsigned char	a;

	a = (unsigned char)c;
	st = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (st[i] == a)
			return (st + i);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     int tab[]={1,2,3,1,6,8,9};
//     int i;

//     i = 3;
//     ft_memchr(tab, 1 , 8);
//     while (i < 6)
//     {
//         printf("%d\n" , tab[i]);
//         i++;
//     }
// }