#include <stdio.h>

void convert16num(void);
void print구구단(void);
void purchase(void);

int main(void)
{
	// 10-1번 문제
	convert16num();

	// 10-2번 문제
	print구구단();

	// 10-3번 문제
	findGCD();	

	// 10-4번 문제
	purchase();
	return 0;
}


void convert16num(void)
{
	int num;
	printf("10진수 : "), scanf("%d", &num);
	printf("16진수 : %x\n", num);
}

void print구구단(void)
{
	int num1, num2;
	int first, second;
	int i,j;
	printf(" ?단 : "), scanf("%d %d", &num1, &num2);
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

	printf("2개 정수 : "), scanf("%d %d", &num1, &num2);
	
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
	int 크림빵 = 500, 새우깡 = 700, 콜라 = 400, total = 3500;
	int i, j, k;
	for ( i = 1 ; 크림빵*i <= total; i++)
	{
		for (j = 1; 새우깡 * j <= total; j++)
		{
			for (k = 1; 콜라 * k <= total; k++)
				if (크림빵 * i + 새우깡 * j + 콜라 * k == total)
					printf("크림빵 : %d개, 새우깡 : %d개, 콜라 : %d개 \n", i, j, k);
		}
	}
}