#include <stdio.h>

void Arraystring(void)
{
	char str[] = "Good";
	char str2[] = { "Good" };	// ���� ��� ����

	printf("�迭 ũ�� : %d, %d\n", sizeof(str), sizeof(str2));

	printf("�� ���� ������ : %c , %c \n", str[4], str2[4]);
	printf("�� ���� ������ : %d , %d \n", str[4], str2[4]);	// null �� �ƽ�Ű �ڵ�� 0 

	char null = '\0', space = ' ';
	printf("Ascii Code for  null : %d / space : %d\n", null, space); // ������ �ƽ�Ű �ڵ�� 32
}

void ReadString(void)
{
	char str3[50];
	int idx = 0;
	printf("���ڿ� : "), scanf("%s", str3);  //scanf�� ���� ����� ���������� ������ ���� ���� ���� ȣ���ϴ� �Լ��� ���߿� ���� ������
	printf("�Էµ� ���ڿ� : %s\n", str3);

	printf("���� ���� ��� : ");
	while (str3[idx] != '\0')
	{
		printf("%c", str3[idx]);
		idx++
	}
}

int main(void)
{
	Arraystring();
	ReadString();
}