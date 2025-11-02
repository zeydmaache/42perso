/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:28:41 by zmaache           #+#    #+#             */
/*   Updated: 2025/11/01 19:53:33 by zmaache          ###   ########.fr       */
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

/* #include <unistd.h>
int	main(void)
{
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr((int)(n / 10));
	}
	ft_putchar((n % 10) + '0');
}
		int	nb;

	nb = 10;
	nb = ft_iterative_factorial(nb);
	nb = nb + '0';
	ft_putnbr(nb);
} */