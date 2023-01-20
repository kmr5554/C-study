#include <stdio.h>

void PrimeNumber(void);
void PrintTime(int);
void Solve_K(int, int);

int main(void)
{
	// 10-5번 문제
	PrimeNumber();
	printf("\n");

	// 10-6번 문제
	int second;
	printf("초 입력 : "), scanf("%d", &second);
	PrintTime(second);

	// 10-7번 문제
	int num, n;
	printf("밑, n 입력 : "), scanf("%d %d", &num, &n);
	Solve_K(num,n);
	return 0;
}

void PrimeNumber(void)
{
	int i, j;
	int PN = 1;

	printf("2 ");

	for (i = 3; PN <= 9; i++)
	{
		int num = 1;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				num++;
				break;
			}
		}
		if (num == 1)
			printf("%d ", i), PN++;
	}
}

void PrintTime(int num)
{
	int h, m, s;
	h = num / 3600;
	m = (num - h * 3600) / 60;
	s = num - h * 3600 - m * 60;
	printf("hours : %d , minutes : %d , seconds : %d \n", h, m, s);
}

int power(int num, int pow)
{
	int i, result=1;
	if (pow == 0)
		return 1;
	for (i = 1; i <= pow; i++)
		result*=num;
	return result;
}
void Solve_K(int num, int n)
{
	int k=0, result=1;
	for (k=0;result<n ;k++)
	{
		result = power(num, k+1);
	}
	printf("공식 만족하는 최대 k : %d", k);
}
