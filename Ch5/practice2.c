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

	float num1 = 5.789;		
	float num2 = 3.24f + 5.12F;
	printf("size : %d, %d\n", sizeof(num1),sizeof(num2));
}