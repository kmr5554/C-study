#include <stdio.h>

int main(void)
{
	char ch = 9; // 128 ���� ũ��
	int inum = 1052;
	double num = 3.1415;  // �Ǽ� ǥ��

	printf("ch ũ�� : %d\n", sizeof(ch));
	printf("inum ũ�� : %d\n", sizeof(inum));
	printf("num ũ�� : %d\n", sizeof(num));

}