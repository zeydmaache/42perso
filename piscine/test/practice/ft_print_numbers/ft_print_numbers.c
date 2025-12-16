/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 20:23:24 by zmaache           #+#    #+#             */
/*   Updated: 2025/12/14 21:56:27 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int  number;
	
	number = '0';

	while (number <= '9')
	{
		write(1, &number, 1);
		number++;
	}
}
int	main(void)
{
	ft_print_numbers();
}