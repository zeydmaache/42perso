#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + '0');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	main(void)
{
	int i;

	i = 0;

	while( i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "k", 1);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
		{
			ft_putnbr(i);
		}
		write(1,"\n",1);
		i++;
	}
	return (0);
}