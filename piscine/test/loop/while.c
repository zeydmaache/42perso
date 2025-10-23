#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char i = 'a';

	while (i <= 'z') {
		printf("%c", i);
		i++;
	}

	printf("\n");

	for (i = 'a'; i <= 'z'; i++)
	{
		printf("%c", i);
	}

	return 0;
}
