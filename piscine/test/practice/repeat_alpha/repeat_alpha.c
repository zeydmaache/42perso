/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 21:30:50 by zmaache           #+#    #+#             */
/*   Updated: 2025/12/14 22:28:27 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	int index = 0;
	int boucle = 0;

	if (argc >= 2)
	{
		while (argv[1][index])
		{
			if (argv[1][index] >= 'a' && argv[1][index] <= 'z')
			{
				boucle = boucle + (argv[1][index] - 'a');
				boucle++;
			}
			else if (argv[1][index] >= 'A' && argv[1][index] <= 'Z')
			{
				boucle = boucle + (argv[1][index] - 'A');
				boucle++;
			}
			else
			{
				write(1, &argv[1][index], 1);
			}
			while (boucle > 0)
			{
				write(1, &argv[1][index], 1);
				boucle--;
			}
			index++;
		}
	}
	write(1, "\n", 1);
	return (0);
}