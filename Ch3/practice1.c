#include <stdio.h>

int main(void)
{
	int num;     // int : ���� ���� ������ �޸� �Ҵ�, num: �޸� ������
	num = 20;    // ���� �ʱ�ȭ �� �� ����
	printf("%d\n\n", num);

	// int num1, num2;   -> ���� �ʱ�ȭ���� �ʾ� ������ 
	
	int num3 = 30, num4 = 40;			// �Ҵ� �� ���� ���ÿ� ����
	int result = num3 + num4;			//�������̸� int���� ���� �Ǿտ��� ����(���� �Ҵ��� �� �տ���)
	printf("num3 = %d \nnum4 = %d \nnum3 + num4 = %d \n",  num3, num4, result);
	
	return 0;	
}