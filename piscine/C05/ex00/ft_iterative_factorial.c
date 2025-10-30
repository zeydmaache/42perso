/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:28:41 by zmaache           #+#    #+#             */
/*   Updated: 2025/10/30 12:08:29 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 1)
	{
		res *= nb;
		nb--;
	}
	return (res);
}

/* int	main(void)
{
	int	nb;

	nb = 10;
	ft_iterative_factorial(nb);
} */