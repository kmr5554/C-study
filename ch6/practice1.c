#include <stdio.h>

int main(void)
{
	int num1 = 7, num2 = 13;
	printf("%o, %#o \n", num1, num1);  // %o�� 8���� ���� ǥ�� -> 7  /  8�������� �����ְ� ������ %#o ��� -> 07
	printf("%x, %#x \n\n", num2, num2);  // %x�� 16���� ���� ǥ�� -> d / 16�������� �����ְ� ������ %#x ��� -> 0xd

	double d1 = 1.23e-3;
	double d2 = 1.23e-6;
	printf("%g %g \n", d1, d2);		// %g�� �Ҽ��� ������ �Ǽ� ����, �Ҽ��� �ڸ� ������ e ���·� ���
	return 0;

}