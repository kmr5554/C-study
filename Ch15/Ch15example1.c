#include <stdio.h>


void Odd(int *param, int len)
{
	printf("Ȧ�� ��� : ");
	for (int i = 0; i < len; i++)
		if (param[i] % 2 == 1)
			printf("%d ", param[i]);
}
void Even(int* param, int len)
{
	printf("\n¦�� ��� : ");
	for (int i = 0; i < len; i++)
		if (param[i] % 2 == 0)
			printf("%d ", param[i]);
}


void Prob1(void)
{
	int n1, n2, n3, n4, n5, n6, n7, n8;
	printf("Input : ");
	scanf("%d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8);
	int arr1[8] = { n1,n2,n3,n4,n5,n6,n7,n8 };

	Odd(arr1, sizeof(arr1) / sizeof(int));
	Even(arr1, sizeof(arr1) / sizeof(int));
	printf("\n\n");
}

void Dec_to_Bi(int n)
{
	int power=1, i=0;
	while (n >= power)
		power *= 2, i++; // i�� �ڸ����� �ش�, power�� n �ٷ� ���� 2�� �ŵ�����
	n = n - power / 2;
	if (n == 1)
		printf("1");
	else if (n == 0)
		printf("0");
	else
		printf("Error");
}

void Prob2(void)
{
	int num2;
	printf("10���� num : "), scanf("%d", &num2);
	Dec_to_Bi(num2);
}


int main(void)
{
	Prob1();
	Prob2();
}