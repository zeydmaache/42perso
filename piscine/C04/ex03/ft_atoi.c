/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:11:29 by zmaache           #+#    #+#             */
/*   Updated: 2025/10/28 14:16:17 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	res;
	int	i;

	sign = 1;
	res = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

//#include <stdio.h>// Include stdio.h for printf
/*static int	ft_isspace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}*/
/*int main()
{
    char *numString = "   ---+--+1234ab567"; // Example input
    int result = ft_atoi(numString);
    
    printf("The converted integer is: %d\n", result); // Print the result
    return 0; // Indicate that the program ended successfully
}*/
