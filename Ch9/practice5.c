#include <stdio.h>

void Recursive(int num)
{
	if (num <= 0)	//recursive �� Ż�� ����
		return;
	printf("Recursive call !  %d\n", num);
	Recursive(num - 1);	// recursive�� ó������ ���ư�
}

int Factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * Factorial(n - 1);
}

int main(void)
{
	Recursive(3);

	printf("1! = %d\n", Factorial(1));
	printf("2! = %d\n", Factorial(2));
	printf("3! = %d\n", Factorial(3));
	printf("9! = %d\n", Factorial(9));

	return 0;
}