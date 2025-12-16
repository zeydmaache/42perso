/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 22:40:46 by zmaache           #+#    #+#             */
/*   Updated: 2025/12/14 22:55:56 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int index = 0;

	if (argc > 1)
	{
		while (argv[1][index])
		{
			if (argv[1][index] >= 'a' && argv[1][index] <= 'm')
				argv[1][index] = argv[1][index] + 13;
			else if (argv[1][index] >= 'n' && argv[1][index] <= 'z')
				argv[1][index] = argv[1][index] - 13;
			else if (argv[1][index] >= 'A' && argv[1][index] <= 'M')
				argv[1][index] = argv[1][index] + 13;
			else if (argv[1][index] >= 'N' && argv[1][index] <= 'Z')
				argv[1][index] = argv[1][index] - 13;
			write(1, &argv[1][index], 1);
			index++;
		}
	}
	write(1, "\n", 1);
	return (0);
}