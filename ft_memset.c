/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:09:59 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/01 11:10:02 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*st;

	st = (char *)str;
	i = 0;
	while (i < n)
	{
		st[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

// int main(void)
// {
//     int s[7]= {2,2,3,1,501};
//     int i = 0;
//     ft_memset(s , 1, 4);
//     while (i < 4)
//     {
//         printf("%d\n" ,s[i]);
//         i++;
//     }
