#include <stdio.h>

void swap(int *ptr1, int *ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

void ex1(void)
{
	int num1 = 10, num2 = 20;
	printf("num1 : %d, num2 : %d\n", num1, num2);
	swap(&num1, &num2);							

	// num1,2�� ����� �ּҿ��� ���� num1,2�� swap

	printf("num1 : %d, num2 : %d\n\n", num1, num2);
}

// scanf���� int�� �Է��� ���� int num�� ����� �ּҸ� ���� ���빰�� �ٲ���� �ϹǷ� &num�� ���ڷ� ����
// �ݸ� ���ڸ� �Է��� ���� str ��ü�� ���ڿ��� ����� �ּ��� ������ ������ �ϹǷ� &�� �ʿ����

int main(void)
{
	ex1();
}