#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;

	int boucle = 0;

	if (argc <= 1)
		write(1, "\n", 1);
	while (argv[1][i])
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			boucle = boucle + (argv[1][i] - 'a');
			boucle++;
		}
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			boucle = boucle + (argv[1][i] - 'A');
			boucle++;
		}
		else
			write(1, &argv[1][i],1);
	
		while (boucle > 0)
		{
			write(1, &argv[1][i],1);
			boucle--;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}