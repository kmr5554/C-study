#include <stdio.h>

void ex1(void)
{
	char str1[] = "My string";		// "����" ���� ���ڿ��� ������ str1�̶�� �迭 ����
	char* str2 = "Your string";		// �ڵ����� ����� "���" ���� ���ڿ��� ù ��ҿ� ���� �ּ� ������ ���� ������ ����

	// str1 = "our string" --> �Ұ��� ���� : str1�� ��� �������̹Ƿ� �ּ��������� �����Ǿ� ����, ��� �迭 ���� ���� ���� ����

	str2 = "Our string";	// str2�� ������ �������̹Ƿ� ������ ����� ���� ����, ��� ������ ��� ���� ������ ���� �Ұ�

	printf("Hello World\n\n");

	// ������ڿ� �Է½ÿ��� ���ڿ��� �ڵ� ���� �� �ּҰ����� ��ȯ�Ǿ� printf(���ڿ� �ּ�) �÷� ó��

	// � �Լ��� �Է� ���ڷ� ��� ���ڿ��� �ް� ���� �� => void func (char *str) ���� �� ���޹޾ƾ� ��
}


void ex2(void)
{
	int num1 = 10, num2 = 20, num3 = 30;
	int* arr[3] = { &num1, &num2, &num3 };	// arr�� �� ���Ҵ� �� num�� ����� �ּ� ������

	printf("%p %p %p\n", arr[0], arr[1], arr[2]);
	printf("%d %d %d\n", *arr[0], *arr[1], *arr[2]);	// �� arr ���ҿ� ����� �ּ� �������� ����Ű�� ������ �ҷ���

	char * strArr[3] = { "Simple","String","Array" };	// �� ��� ���ڿ��� ����� �ּ��������� ���ҷ� ���� strArr �迭
	printf("%p %p %p\n", strArr[0], strArr[1], strArr[2]);
	printf("%s %s %s\n\n", strArr[0], strArr[1], strArr[2]);


}

int main(void)
{
	ex1();
	ex2();


}