/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:39:09 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/02 15:39:11 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_check(const char *str, int i, int n)
{
	long	number;
	long	help;

	number = 0;
	help = 0;
	while (str[n] >= '0' && str[n] <= '9')
	{
		help = 10 * help + (str[n] - '0');
		if (i == -1)
		{
			if ((help / 10) != number)
				return (0);
		}
		if (i == 1)
		{
			if ((help / 10) != number)
				return (-1);
		}
		number = 10 * number + (str[n] - '0');
		n++;
	}
	return (number * i);
}

int	ft_atoi(const char *str)
{
	long	number;
	long	help;
	int		sign;
	int		n;

	number = 0;
	help = 0;
	sign = 1;
	n = 0;
	while (str[n] == '\f' || str[n] == '\n' || str[n] == 32
		|| str[n] == '\r' || str[n] == '\v' || str[n] == '\t')
		n++;
	if (str[n] == '-')
	{
		sign *= -1;
		n++;
	}
	else if (str[n] == '+')
		n++;
	number = ft_check(str, sign, n);
	return (number);
}
