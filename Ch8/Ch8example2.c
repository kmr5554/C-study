#include <stdio.h>

int main(void)
{
	// 8-2 (1)
	int dan, num1;
	for (dan = 1; dan < 10; dan++)
	{
		if (dan % 2 == 1)
			continue;
		num1 = 1;
		while (1)
		{
			printf("%d X %d = %d\n", dan, num1, dan * num1);
			num1++;
			if (num1 > dan)
				break;
		}
		printf("\n");
	}

	// 8-2 (2)
	int A, Z;
	for (A = 1; A < 10; A++)
	{
		for (Z = 1; Z < 10; Z++)
		{
			if (11 * (A + Z) == 99)
				printf("A = %d, Z= %d, %d%d + %d%d = 99\n", A, Z, A, Z, Z, A);
		}
	}
}