#include <stdio.h>

void problem1(void)
{
	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1; // ptr2�� ptr1�� ���� --> num ����� �ּ� ����
	(*ptr1)++, (*ptr2)++; // �� �� num�� ������Ŵ
	printf("%d\n", num);
}

void problem2(void)
{
	int num3 = 10, num4 = 20;
	int* ptr1 = &num3, * ptr2 = &num4;
	(*ptr1)+=10, (*ptr2)-=10;
	ptr1 = &num4;	
	ptr2 = &num3;	

	// *ptr1=&num4 �� ��� ���� �߻�
	// ���� : *ptr1�� num3�� �ǹ��ϹǷ� num3 = &num4 ���� �Ǳ� ����

	printf("ptr1 : %d, ptr2 :  %d", *ptr1, *ptr2);
}

int main(void)
{
	// 1�� ����
	problem1();

	// 2�� ����
	problem2();

}