#include <stdio.h>

int main(void)
{
	int num = 1;
	if (num == 1)
	{
		int num = 7;   // if �� ������ ������ �������� ����Ǹ� if�� ���� 11�� num��
		num += 10;	   // 5���� �ƴ� 8���� num�� ����Ű�� ��.
					   // ���࿡ 8�� �ּ�ó�� �ÿ��� 11���� num�� 5���� num���� ����
		printf(" if�� �� �������� : %d\n", num);
	}
	printf("main�� �������� : %d\n", num);
	return 0;
}