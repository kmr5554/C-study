#include <stdio.h>

void Prob1(void)
{
	int * arr1[5];
	int * arr2[3][5];

	int **ptr1= arr1;		// arr1�� ������ ������ arr1[0]�� �ּҸ� ��ȯ  -->  arr1�� �ҷ����� ptr1�� double ������ ������.
	int *(*ptr2)[5] = arr2;	// arr2�� ������ ���� arr2[0][0]�� �ּҸ� ��ȯ --> arr2 �ҷ����� ptr2�� double ������ �����̸�, arr2�� 2���� �迭�̹Ƿ� ũ�� ���� �ʿ�
}

void SimpleFuncOne(int ary[], int ary2[])
{
	printf("�迭 �ּ� : %p, %p\n", ary, ary2);
}

void SimpleFuncTwo(int ary[][4], int (*ary2)[4])
{
	printf("�迭 �ּ� : %p, %p", ary, ary2);
}

void Prob2(void)
{
	int arr1[3] = { 1,2,3 };
	int arr2[4] = { 1,2,4 };
	int arr3[3][4] = { 1,2,3,4,5,6,7,8 };
	int arr4[2][4] = { 1,3,5,6,7,8,9,5 };

	SimpleFuncOne(arr1, arr2);
	SimpleFuncTwo(arr3, arr4);
}

int main(void)
{
	Prob1();
	Prob2();
}