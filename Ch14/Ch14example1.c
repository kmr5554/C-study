#include <stdio.h>

void SquareByValue(int n)
{
	n *= n;
	printf("square num : %d\n", n);
}

void SquareByReference(int *param)
{
	(*param) *= (*param);
	printf("square num : %d\n", *param);
}

void Prob1(void)
{
	int num;
	printf("num : "), scanf("%d", &num);
	printf("\n");

	SquareByValue(num);
	printf("num : %d\n\n", num);

	SquareByReference(&num);
	printf("num : %d\n\n", num);
}

void Swap3(int* n1, int* n2, int* n3)
{
	int temp;
	temp = *n2;
	*n2 = *n1, * n1 = *n3, * n3 = temp;
}

void Prob2(void)
{
	int num1, num2, num3;
	printf("num1, num2, num3 : "), scanf("%d %d %d", &num1, &num2, &num3);
	Swap3(&num1, &num2, &num3);
	printf("num1, num2, num3 : %d %d %d\n", num1, num2, num3);
}

int main(void)
{
	Prob1();
	Prob2();
}