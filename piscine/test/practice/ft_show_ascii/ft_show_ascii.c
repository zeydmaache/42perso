/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_ascii.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 21:24:49 by zmaache           #+#    #+#             */
/*   Updated: 2025/12/16 21:54:57 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putascii(char n)
{
	
	int i = n;
	
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 0 && n <= 9)
	{
		ft_putchar(n + '0');
	}
	if (n > 9)
	{
		ft_putascii(n / 10);
		ft_putascii(n % 10);
	}
}

int main() {
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	int c = 0;

	while (str[i] != '\0')
	{
		ft_putchar(str[c]);
		ft_putstr(" => ");
		ft_putascii(str[i]);
		ft_putchar('\n');
		c++;
		i++;
	}
	return (0);
}