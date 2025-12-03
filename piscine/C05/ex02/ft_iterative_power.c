/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:22:01 by zmaache           #+#    #+#             */
/*   Updated: 2025/11/03 18:44:47 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}

/* #include <stdio.h>

int main(void)
{
    printf("%d\n", ft_iterative_power(2, 3));  // 8
    printf("%d\n", ft_iterative_power(5, 0));  // 1
    printf("%d\n", ft_iterative_power(3, -2)); // 0
    printf("%d\n", ft_iterative_power(10, 2)); // 100
} */