/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 20:38:47 by zmaache           #+#    #+#             */
/*   Updated: 2025/10/23 12:09:58 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }

// void ft_print_alphabet(void)
// {
// 	int i;
// 	i = 'a';

// 	while (i <= 'z')
// 	{
// 		write(1, &i, 1);
// 		i++;
// 	}

// }

// int main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }