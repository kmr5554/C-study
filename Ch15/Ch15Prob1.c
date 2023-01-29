#include <stdio.h>


void Odd(int *param, int len)
{
	int i, count=0;

	for (i = 0; i < len; i++)
		if (param[i] % 2 == 1)
			count++;

	printf("È¦¼ö Ãâ·Â : ");

	for (i = 0; i < len; i++)
		if (param[i] % 2 == 1)
		{
			printf("%d", param[i]);
			count--;
			if (count != 0)
				printf(", ");
			else
				printf("\n");
		}
}

void Even(int* param, int len)
{
	int i, count = 0;

	for (i = 0; i < len; i++)
		if (param[i] % 2 == 0)
			count++;

	printf("Â¦¼ö Ãâ·Â : ");

	for (i = 0; i < len; i++)
		if (param[i] % 2 == 0)
		{
			printf("%d", param[i]);
			count--;
			if (count != 0)
				printf(", ");
			else
				printf("\n");
		}
}

int main(void)
{
	int arr1[10];
	int i;
	printf("Input : ");
	for (i=0; i<sizeof(arr1)/sizeof(int) ; i++)
		scanf("%d", &arr1[i]);
	Odd(arr1, sizeof(arr1) / sizeof(int));
	Even(arr1, sizeof(arr1) / sizeof(int));
	printf("\n\n");
}