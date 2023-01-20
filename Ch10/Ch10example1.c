#include <stdio.h>

void convert16num(void);
void print������(void);
void purchase(void);

int main(void)
{
	// 10-1�� ����
	convert16num();

	// 10-2�� ����
	print������();

	// 10-3�� ����
	findGCD();	

	// 10-4�� ����
	purchase();
	return 0;
}


void convert16num(void)
{
	int num;
	printf("10���� : "), scanf("%d", &num);
	printf("16���� : %x\n", num);
}

void print������(void)
{
	int num1, num2;
	int first, second;
	int i,j;
	printf(" ?�� : "), scanf("%d %d", &num1, &num2);
	if (num1 <= num2)
		first = num1, second = num2;
	else
		first = num2, second = num1;
	
	for (i = first; i <= second; i++)
	{
		for (j = 1; j < 10; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
}

int findGCD(void)
{
	int num1, num2;
	int i, j;
	int GCD;

	printf("2�� ���� : "), scanf("%d %d", &num1, &num2);
	
	for (i = 1; i <= num1; i++)
	{
		if (num1 % i != 0)
			continue;
		else
			if (num2 % i == 0)
				GCD = i;
	}
	printf("GCD : %d\n", GCD);
	return GCD;
}

void purchase(void)
{
	int ũ���� = 500, ����� = 700, �ݶ� = 400, total = 3500;
	int i, j, k;
	for ( i = 1 ; ũ����*i <= total; i++)
	{
		for (j = 1; ����� * j <= total; j++)
		{
			for (k = 1; �ݶ� * k <= total; k++)
				if (ũ���� * i + ����� * j + �ݶ� * k == total)
					printf("ũ���� : %d��, ����� : %d��, �ݶ� : %d�� \n", i, j, k);
		}
	}
}