#include <stdio.h>

int main(void)
{
	int num1 = 12;
	int num2 = 12;					   // ++�� �ڿ� ������ ������ ������, �տ������� ������ �Ŀ���

	printf("num1++ : %d\n", num1++);   // num1++ �ǹ� : num1�� ���� ������ %d�� ���� �� num1�� 1 ���� (num1=12 -> ���� -> num1=13
	printf("++num1 : %d\n", ++num1);   // ++num1 �ǹ� : num1�� 1 ���� ���� �� num1�� ������ %d�� ���� (num1=13 -> num1=14 -> ����) 
	
	int num3 = (num1--) + 10;		   // �Ұ�ȣ �ִ��� ���� num1������ ���� �� num1�� 1 ����
	printf("num3 = %d, num1 = %d\n", num3, num1);  
	return 0;
}