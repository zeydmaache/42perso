/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 11:12:22 by zmaache           #+#    #+#             */
/*   Updated: 2025/10/19 11:18:12 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	first_line(int x)
{
	if (x <= 0)
	{
	}
	else if (x == 1)
	{
		ft_putchar('/');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('/');
		x = x - 2;
		while (x > 0)
		{
			x--;
			ft_putchar('*');
		}
		ft_putchar('\\');
		ft_putchar('\n');
	}
}

void	center_row(int x)
{
	if (x <= 0)
	{
	}
	else if (x == 1)
	{
		ft_putchar('*');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('*');
		x = x - 2;
		while (x > 0)
		{
			x--;
			ft_putchar(' ');
		}
		ft_putchar('*');
		ft_putchar('\n');
	}
}

void	last_line(int x)
{
	if (x <= 0)
	{
	}
	else if (x == 1)
	{
		ft_putchar('\\');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('\\');
		x = x - 2;
		while (x > 0)
		{
			x--;
			ft_putchar('*');
		}
		ft_putchar('/');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
	}
	else if (y == 1)
	{
		first_line(x);
	}
	else
	{
		first_line(x);
		y = y - 2;
		while (y > 0)
		{
			y--;
			center_row(x);
		}
		last_line(x);
	}
}
