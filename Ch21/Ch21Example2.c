#include <stdio.h>

int main(void)
{
	char str[4];
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
	//				  ���� fgets�� ����Ű(\n)�� ���ڷ� �޾Ƶ��̹Ƿ� ���ڿ� ���� null(\n)�� printf���� \n�� �ι� ����Ǿ���.
	while (getchar() != '\n');


	char str1[20];
	char str2[20];
	int j=0;

	printf("1�� �Է� : ");
	fgets(str1, sizeof(str1), stdin);
	printf("2�� �Է� : ");
	fgets(str2, sizeof(str2), stdin);
	while (str1[j] != '\n')
	{
		printf("%c %d\n", str1[j],j);
		j++;
	}
	int ag1, ag2;
	ag1 = atoi(&str1[2]);
	ag2 = atoi(&str2[2]);

	if (ag1 == ag2)
		printf("same");
	else
		printf("diff");
	return 0;
}
