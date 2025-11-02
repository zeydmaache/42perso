/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 14:21:01 by zmaache           #+#    #+#             */
/*   Updated: 2025/11/01 18:28:40 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	nb;

	i = 1;
	while (i < argc)
	{
		nb = 0;
		while (argv[i][nb] != '\0')
		{
			write(1, &argv[i][nb], 1);
			nb++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
