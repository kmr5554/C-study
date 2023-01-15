#include <stdio.h>

int main(void)
{
	// 7-4 (1)

	int start, finish, total=0;
	printf("start, finish :");
	scanf("%d %d", &start, &finish);
	
	for (; start <= finish; start++)
		total += start;
	printf("total : %d\n\n", total);

	// 7-4 (2)

	int n, i, total1=1;
	printf("n : ");
	scanf("%d", &n);

	printf("n! = 1 ");
	for (i = 1; i < n; i++)
	{
		printf("X %d ", i + 1);
		total1 *= i;
	}
	total1 = total1 * i;
	printf("\nn! = %d\n", total1);
	
}