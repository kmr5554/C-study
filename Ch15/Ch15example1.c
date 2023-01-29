#include <stdio.h>


void Odd(int *param, int len)
{
	printf("È¦¼ö Ãâ·Â : ");
	for (int i = 0; i < len; i++)
		if (param[i] % 2 == 1)
			printf("%d ", param[i]);
}
void Even(int* param, int len)
{
	printf("\nÂ¦¼ö Ãâ·Â : ");
	for (int i = 0; i < len; i++)
		if (param[i] % 2 == 0)
			printf("%d ", param[i]);
}


int main(void)
{
	int n1, n2, n3, n4, n5, n6, n7, n8;
	printf("Input : ");
	scanf("%d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8);
	int arr1[8] = { n1,n2,n3,n4,n5,n6,n7,n8 };

	Odd(arr1, sizeof(arr1) / sizeof(int));
	Even(arr1, sizeof(arr1) / sizeof(int));
	printf("\n\n");
}