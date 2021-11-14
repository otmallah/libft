/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:09:18 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/01 15:09:19 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*st1;
	unsigned char	*st2;

	st1 = (unsigned char *)str1;
	st2 = (unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		if (st1[i] != st2[i])
			return (st1[i] - st2[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
//     int tab[]={1,2,5,8,7,8,7};
//     int a = 0;
//     memcmp(tab , tab + 3 , 1);
//     while (a < 10)
//     {
//         printf("%d \n" , tab[a]);
//         a++;
//     }
// }