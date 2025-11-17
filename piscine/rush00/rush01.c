/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 14:42:31 by zmaache           #+#    #+#             */
/*   Updated: 2025/10/19 10:37:29 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	start_ligne(int x)
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

void	end_ligne(int x)
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

void	inter_ligne(int x)
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

void	rush(int x, int y)
{
	if (x == 1 && y == 1)
	{
		ft_putchar('/');
		ft_putchar('\n');
	}
	else if (x > 1 && y == 1)
	{
		start_ligne(x);
		y = y - 2;
		while (y > 0)
		{
			y--;
		}
	}
	else if (x == 1 && y > 1)
	{
		ft_putchar('/');
		ft_putchar('\n');
		y = y - 2;
		while (y > 0)
		{
			ft_putchar('*');
			ft_putchar('\n');
			y--;
		}
		ft_putchar('\\');
		ft_putchar('\n');
	}
	else
	{
		start_ligne(x);
		y = y - 2;
		while (y > 0)
		{
			y--;
			inter_ligne(x);
		}
		end_ligne(x);
	}
}
