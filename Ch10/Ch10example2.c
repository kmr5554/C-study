#include <stdio.h>

void PrimeNumber(void);
void PrintTime(int);
void Solve_K(int, int);
int Recur_P(int);


int main(void)
{
	// 10-5�� ����
	PrimeNumber();
	printf("\n");

	// 10-6�� ����
	int second;
	printf("�� �Է� : "), scanf("%d", &second);
	PrintTime(second);

	// 10-7�� ����
	int num, n;
	printf("��, n �Է� : "), scanf("%d %d", &num, &n);
	Solve_K(num,n);
	
	// 10-8�� ����
	int n_power;
	printf("power n of 2 : "), scanf("%d", &n_power);
	printf("2�� %d�� : %d\n", n_power, Recur_P(n_power));
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
	int i, POWER=1;

	for (i = 1; i <= pow; i++)
		POWER*=num;
	return POWER;
}
void Solve_K(int num, int n)
{
	int k, result=1;
	for (k=0;result<n ;k++)
	{
		if (num > n)
			break;
		result = power(num, k+1);
	}
	if (result != n)
		k = k - 1;
	printf("���� �����ϴ� �ִ� k : %d\n\n", k);
}

int Recur_P(int num)
{
	if (num == 0)
		return 1;
	else
		return 2 * Recur_P(num - 1);
}

