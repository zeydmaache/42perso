#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int is_palindrome(char *str)
{
	int i;
	int start;
	int end;


	i = 0;
	while (str[i] != '\0')
			i++;

	start = 0;
	end = i - 1;
	while (start < end)
	{
		if (str[start] != str[end])
			return (0);
		else 
		{
			start++;
			end--;
		}
	}
	return (1);
}


int	main(int ac, char **av)
{
	if (ac >= 2)
	{
		if (is_palindrome(av[1]) == 1)
		{
			ft_putstr(av[1]);
		}
		else 
		{
			ft_putstr("this is not palindrome");
		}
	}
	write(1, "\n", 1);
	return (0);
}
