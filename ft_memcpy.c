/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:57:01 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/01 15:57:03 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	j;

	j = 0;
	str1 = (char *)dest;
	str2 = (char *)src;
	if (str1 == str2)
		return (str1);
	while (j < n)
	{
		str1[j] = str2[j];
		j++;
	}
	return (str1);
}

// int main(void)
// {
//     int d[]={1,2,3,5,6,9};
//     int i;

//     i = 0;
//     ft_memcpy(d, s, 8);
//     while (i < 8)
//     printf("%s\n" , d);
// }