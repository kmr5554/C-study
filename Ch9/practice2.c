#include <stdio.h>

void NoReturnType(int num)
{
	if (num < 0)
		return;		// ���⼭ return �ڿ� ��ȯ�� ��� x ���� : ��ȯ���� void�̹Ƿ� return�� �Լ� ���� �ǹ̸� ����
}


int Increment(int);	// increment �Լ� ���� (�������� ������ ����� ��)
int main(void)
{
	int num = 2;
	num = Increment(num);  // �տ��� �Լ� ���� �����Ƿ� main�� �Լ����� ���� ���ǵǾ ������ ���� 
	return 0;
}
int Increment(int n)
{
	n++;
	return n;
}