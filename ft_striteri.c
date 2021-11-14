/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:45:14 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/04 13:45:15 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			(*f)(i, &s[i]);
			i++;
		}
	}
}

// int main(void)
// {
//     char s[]="salamhhhhhhh";

//     ft_striteri(s , ft_up);
//     printf("%s" , s);
// }
// void	ft_up(unsigned int a, char *str)
// {
// 	str[0] = str[0] - 32;
// 	write(1, str, 1);
// 	printf(" %d index %s\n" , a , str);
// }