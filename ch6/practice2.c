#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	printf(" ���� 3�� : ");
	scanf("%d %o %x", &num1, &num2, &num3);  // num1�� 10����, num2�� 8����, num3�� 16���� �������� 12�̹Ƿ� ���� 10�������� �ǹ��ϴ� �� �ٸ�
	printf("�Էµ� ���� : %d, %d, %d\n\n", num1, num2, num3);

	/*
	1. float / double / long double�� �Է�(scanf)���� ���Ĺ��� : %f, %lf, %Lf
	2. float / double / long double�� ���(printf)���� ���Ĺ��� : %f, %f, %Lf
	3. ���ڿ��� ��� ��,��� ��� %s ���
	*/
	return 0;
}