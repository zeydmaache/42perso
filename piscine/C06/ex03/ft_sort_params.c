/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:29:54 by zmaache           #+#    #+#             */
/*   Updated: 2025/11/02 13:28:05 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int argc, char **argv)
{
	int	i;
	i = 1;
	if (argc >= 2)
	{
		while (++i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i+1]) > 0)
			{
				ft_swap(&argv[i], &argv[i + 1]);
				i = 0;
			}
		}
		i = 0;
		while (++i < argc)
		ft_putstr(argv[i]);
		}
		else
		write(1, "\n", 1);
		return(0);
}