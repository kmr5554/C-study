#include <stdio.h>

int main(void)
{
	//7-2 (1)
	int i = 0, input, total=0;

	while (i++ < 5)
	{
		printf("%d ¹øÂ° input : ", i);
		scanf("%d", &input);
		while (input < 1)
		{
			printf("Error!! Enter input again : ");
			scanf("%d", &input);
		}
		total += input;
	}
	printf("\ntotal : %d\n\n", total);

	//7-2 (2)
	int a=0, b;

	while (a++ < 5)
	{
		b = 0;
		while (b++ < a-1)
		{
			printf("o ");
		}
		printf("*\n");	
	}
}