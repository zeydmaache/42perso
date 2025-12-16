/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 16:17:40 by zmaache           #+#    #+#             */
/*   Updated: 2025/12/16 08:30:07 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>                                              

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}

int	main(int argc, char **argv)
{
	int	i;
	
	i = 0;

	// printf("%d", ft_strlen(argv[2]));

	if (argc <= 4)
	{
		if (ft_strlen(argv[2]) && ft_strlen(argv[3]) == 1)
		{
			while (argv[1][i] != '\0')
			{
				if (argv[1][i] == argv[2][0])
					argv[1][i] = argv[3][0];
				i++;
			}
			i = 0;
			while (argv[1][i])
			{
				write(1, &argv[1][i],1);
				i++;
			}
			write(1,"\n",1);
		}
		else
			write(1,"\n",1);
	}
	else
		write(1,"\n",1);
	return (0);
}