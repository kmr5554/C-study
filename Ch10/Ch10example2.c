#include <stdio.h>

void PrimeNumber(void);
void PrintTime(int);
void Solve_K(int, int);
int Recur_P(int);

// 5�� ����, 7�� �ٽ� ǰ

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
	int count = 1;

	for (i = 1; count <= 10; i++)
	{
		int num = 0;
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)
				num++;
		}
		if (num == 2)
			printf("%d ", i), count++;
	}
}

void PrintTime(int num)
{
	int h, m, s;
	h = num / 3600;
	m = (num - h * 3600) / 60;
	s = (num - h * 3600- m * 60);
	printf("hours : %d , minutes : %d , seconds : %d \n", h, m, s);
}

void Solve_K(int num, int n)
{
	int k=0, result=1;
	while(1)
	{
		if (num > n)
			break;
		result *= num;
		if (result > n)
			break;
		k++;
	}
	printf("���� �����ϴ� �ִ� k : %d\n\n", k);
}

int Recur_P(int num)
{
	if (num == 0)
		return 1;
	else
		return 2 * Recur_P(num - 1);
}

/* 8�� �ٸ� �� !!!!!!!!!

int Recur_P(int num)
{
	static int y=1;
	if (num==0)
		return y;
	else
		y*=2
		Recur_P(num-1)
}
*/