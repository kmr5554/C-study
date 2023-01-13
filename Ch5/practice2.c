#include <stdio.h>

int main(void)
{
	char ch1 = 'A';
	int ch2 = 'Z';

	printf("%c %d \n", ch1, ch1);  // %c : ���� ���� ��� , %d : ���� ���� ���
	printf("%c %d \n\n", ch2, ch2); 
	printf("literal int size : %d\n", sizeof(65));
	printf("literal char size : %d\n", sizeof(ch1)); // ch1 ���´� char�� �����Ǿ����Ƿ� 1byte
	printf("literal char size : %d\n", sizeof('A'));  // �����Ϸ��� ���� 'A'�� ������ ��ȯ�ǹǷ� int ũ���� 4byte

	float num1 = 5.789;			// �Ǽ� �⺻���� double������ ������ float�� ���������Ƿ� ������ �߸� �� ����
	float num2 = 3.24f + 5.12F;  // ���� �ڿ� f �Ǵ� F ���̸� �Ǽ��� �����
	printf("size : %d, %d\n\n", sizeof(num1),sizeof(num2)); 

	/* ���̻� F:float , U:int, L:long */

	int num3 = 129;		// int�� 4����Ʈ�� ����ǹǷ� 129�� 00000000 00000000 00000000 10000001�� ����
	char ch = num3;		// char�� 1����Ʈ�� ����ǹǷ� ���� ����Ʈ �սǵǾ� 10000001�� ���� -> ��ȣ�� ���ϰ� ��
	printf("num3 = %d \n", num3);
	printf("char = %d \n", ch);

	/* 1. ������ ǥ�������� �� ���� �ڷ������� ��ȯ�� ��� ������ ���� �սǵ�
	   2. �ڷ��� �ٸ� ������ �Ǽ��� ���� �ÿ� �ڵ������� �Ǽ��� ��ȯ��
	   3. ���� �ڷ��� �������� �Ǽ��̸� ������ ��ȯ�Ǿ� ����� */

	return 0;
}