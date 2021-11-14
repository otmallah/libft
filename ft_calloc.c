/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:15:47 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/01 18:15:49 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t c)
{
	void		*str;
	size_t		i;

	str = malloc(n * c);
	i = 0;
	if (str == 0)
		return (NULL);
	while (i < (n * c))
	{
		((char *)str)[i] = 0;
		i++;
	}
	return (str);
}

// int main(void)
// {
//     char s[]="sala";
//     char *b;
//     int i,j;

//     i = 0;
//     j = 0;
//     while (s[i])
//         i++;
//     b = ft_calloc(1 , i);
//     while (s[j])
//     {
//         b[j] = s[j];
//         j++;
//     }
//     b[j] = '\0';
//     printf("%s" , b);
// }