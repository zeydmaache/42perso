/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaache <zmaache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 18:29:00 by zmaache           #+#    #+#             */
/*   Updated: 2025/10/25 19:23:17 by zmaache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char *ft_strcapitalize(char *str)
{
    int i = 0; // Initialize i to 0

    while (str[i] != '\0') {
        // Check if the character is the start of a word
        if ((i == 0 || str[i - 1] == ' ') && (str[i] >= 'a' && str[i] <= 'z')) {
            str[i] = str[i] - 32; // Convert to uppercase
        }
        i++; // Move to the next character
    }
    return str; // Return modified string (not 0)
}

int main(void)
{
    char str[] = "hi, how are you? 42words forty-two; fifty+and+one";
    ft_strcapitalize(str);
    write(1, str, sizeof(str)-1); // Output the result
    return 0; // Return success
}
