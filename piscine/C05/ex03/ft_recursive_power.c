/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 21:43:22 by zmaache           #+#    #+#             */
/*   Updated: 2025/11/03 18:49:11 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, --power));
}
/*
#include <stdio.h> 
int	main(void)
{
	printf("Power of 2 ^ -1 = %d\n", ft_recursive_power(2, -1));
	printf("Power of 0 ^ 0 = %d\n", ft_recursive_power(0, 0));
	printf("Power of 3 ^ 1 = %d\n", ft_recursive_power(3, 1));
	printf("Power of -3 ^ 3 = %d\n", ft_recursive_power(-3, 3));
} */