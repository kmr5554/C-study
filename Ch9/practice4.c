#include <stdio.h>

void Add(int);
int num1;		// �������� num1, �⺻ 0���� �ʱ�ȭ��

int Add2(int);
int num2 = 1;	// �������� num2 = 1

void Add(int val)
{
	num1 += val;
}

int Add2(int val2)
{
	int num2 = 9;	
	num2 += val2;
	return num2;	// Add2 ���� ��ȯ�Ǵ� �������� num2 = 9 + val2
}

void SimpleFunc(void)
{
	static int num3 = 0;
	int num4 = 0;
	num3++, num4++;
	printf("static : %d , local : %d\n", num3, num4);
}

int main(void)
{
	printf("num1 : %d", num1);  // ��� : 0
	Add(3), num1++;				
	printf("num1 : %d", num1);	// ��� : 4

	int num2 = 5;				// main�� �������� num2 = 5
	printf("num2 : %d\n", num2);
	printf("num2 : %d\n", Add2(3));  // Add2�� �������� num2 = 12
	
	/* ���������� �̸� ���� �������� ���� �� ���������� �������� ��. */

	for (int i = 0; i < 3; i++)
		SimpleFunc();			// ��� : static num3�� 1, 2, 3���� ���� & local num4�� 1�� ����
	return 0;
}