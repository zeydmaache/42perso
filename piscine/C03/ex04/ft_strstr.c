/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 12:39:13 by zmaache           #+#    #+#             */
/*   Updated: 2025/10/26 17:42:31 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;

	if (to_find[0] == '\0')
	return (str);

	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			return (&str[i]);
			++j;
		}
		++i;
	}

	return (0); 
}

int	main(void)
{
	char *str = "Try to find this part of the text";
	char *to_find = "this";

	printf("Returned: %s\n", ft_strstr(str, to_find));
}