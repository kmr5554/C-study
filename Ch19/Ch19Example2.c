#include <stdio.h>

void String(int argc, char* argv[])
{
	int i;
	for (i = 0; i < argc; i++)
		printf("%s \n", argv[i]);
}

int main(void)
{
	char* str[3] = { "C programming", "C++ programming", "JAVA programming" };
	String(3, str);
	return 0;
}

/*

1.	str�� ��� ���ڿ� 3���� �������� ���� �迭��, ���ڿ��� �ڵ� ������ �� ���ڿ��� �޸� �ּҷ� ��ȯ��.
	���� str�� ������ �迭�̹Ƿ� �տ� *�� �ٿ��� char *str[3]�� ������.

2.  �迭 �̸��� �� �迭 ù ������ �ּҸ� ����Ű�� ������ �����̱⵵ ��.
	���� �迭 �̸��� "str"�� ���� �Լ� ���ڴ� str�� ù ���Ұ� ����� �ּҸ� ����Ű�� �Ǵٸ� ������ �������� ��.

3.	str�� ���Ұ� int�� �̾��ٸ� argv�� int�� ������ ����� �ּҸ� ����Ű�� single ������ ����
	���ÿ��� str�� ���Ҵ� ���ڿ��� �ּ��� �������̹Ƿ� argv�� ������ ������ ����� �ּҸ� ����Ű�� double ������ ����.

4. �׷��Ƿ� argv�� ǥ������� char** argv�̸�, �̴� char* argv[]�� ���Ǿ���.

*/

