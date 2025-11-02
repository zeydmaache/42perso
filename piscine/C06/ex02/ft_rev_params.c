/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 14:47:08 by zmaache           #+#    #+#             */
/*   Updated: 2025/11/01 18:29:06 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	nb;

	i = argc - 1;
	while (i > 0)
	{
		nb = 0;
		while (argv[i][nb] != '\0')
		{
			write(1, &argv[i][nb], 1);
			nb++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
