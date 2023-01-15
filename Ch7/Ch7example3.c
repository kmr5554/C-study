#include <stdio.h>

int main(void)
{
	//7-3 (1)_1

	int total = 0, input=1;
	while (input != 0)
	{
		total += input;
		printf("input : ");
		scanf("%d", &input);
		
	}
	printf("total : %d\n\n", total-1);

	//7-3 (1)_2

	int total1 = 0, input1;
	printf("input : ");
	scanf("%d", &input1);

	while (input1 != 0)
	{
		total1 += input1;
		printf("input : ");
		scanf("%d", &input1);
	}
	printf("total : %d\n\n", total1);

	//7-3 (2)

	int num2=0, total2 = 0, i;
	printf("limit : ");
	scanf("%d", &i);

	do
	{
		total2 += num2;
		num2++;
	} while (num2 <= (i/2) );
	printf("total : %d\n\n", total2 * 2);

	//7-3 (3)

	int cur = 2;
	do
	{
		int num3 = 1;
		do
		{
			printf("%d X %d = %d\n", cur, num3, cur * num3);
			num3++;
		} while (num3 < 10);
		printf("\n");
		cur++;
	} while (cur < 10);


}