#include <stdio.h>

int main(void)
{
	char str[6];
	int i;

	//	fgets(str, sizeof(str), stdin)
	//	str ���̸�ŭ str�� stdin ��Ʈ�����κ��� ����

	printf("���� 8 �̻� �����Է�\n");

	for (i = 0; i < 3; i++)
	{
		fgets(str, sizeof(str), stdin);		// str ���̺��� �� ū ���ڿ��� ������ str ���̸�ŭ�� �а� �������� ������ ���� 
		printf("Read %d : %s \n", i + 1, str);
	}

	// example ��� : ����ڴ� �ѹ� �Է������� fgets�� �����ִ� ���ڵ��� ������ ���� �� �ݺ���.

	return 0;
}
