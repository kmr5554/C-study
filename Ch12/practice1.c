#include <stdio.h>

// ������ ���� : �޸� �ּ� ���� �����ϴ� ����

void pointer(void)
{
	int num = 7;
	int* pnum;		// ������ ���� pnum ����
	pnum = &num;	// pnum�� ���� num�� �ּҰ� ���� , & �ǹ� : ���� �ǿ������� �ּҰ��� ��ȯ��Ű�� ������
	return 0;
}

void pointer2(void)
{
	int num1 = 5, num2 = 10;
	// double * pnum1 = &num1;   --> ���� �� �Ǵ� ���� : �ǿ������� �ڷ����� �����ͺ��� �ڷ����� �޶� * ���� �� ���� �߻�
	int* pnum = &num1;
	*pnum = 20;		// pnum�� ����Ű�� ������ 20 ����
	pnum = &num2;	// pnum�� ����Ű�� ������ num1���� num2�� ����
	*pnum = 40;		// num2�� 40 ����
	printf("%d \n", *pnum);
}

void pointer3(void)
{
	//int* ptr;			--> ���� �� �Ǵ� ����: ptr �����Ͱ� ��� ����Ű���� �𸣴� ���¿��� ������ �Ϸ� �ϸ� �޸� �ջ�ǹǷ� ���� �߻�
	//*ptr = 200;
	int* ptr1 = 0;		// ������ ������ ���� �س��� ���߿� �ּ� �����Ϸ��� 0 �Ǵ� NULL ���
	int* ptr2 = NULL;

}

int main(void)
{
	pointer2();
	pointer3();
	return 0;
}