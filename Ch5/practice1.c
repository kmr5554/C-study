#include <stdio.h>

int main(void)
{
	char ch = 9; // 128 ���� ũ��
	int inum = 1052;
	double num = 3.1415;  // �Ǽ� ǥ��

	printf("ch ũ�� : %d\n", sizeof(ch));   // size of : ���� ����Ʈ ũ�� ���
	printf("inum ũ�� : %d\n", sizeof(inum));
	printf("num ũ�� : %d\n\n", sizeof(num));

	char num1 = 1, num2 = 2, result1 = 0;
	result1 = num1 + num2;

	printf("num1,num2 ũ��: %d, %d\n", sizeof(num1), sizeof(num2));
	printf("ch added ũ�� : %d\n", sizeof(num1 + num2));	// ������ ���� ���� �ڷ������� ��ȯ�ϹǷ� int ũ��� ��µ�
	printf("result1 ũ��  : %d\n\n", sizeof(result1));		// ���� ���� ������ char�� ũ��� ��µ�
	
	unsigned char num3 = 3;
	printf("num3 ũ�� : %d\n", sizeof(num3));		// unsigned : 0 �Ǵ� ����� ����, ��� ���ɹ����� 2��
}