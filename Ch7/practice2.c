#include <stdio.h>

int main(void)
{
	int total = 0, num = 0;

	do    // �ݺ��� ������ 1ȸ �̻� ���� �ÿ��� do ~ while �� ���
	{
		printf("����(0 to quit) : ");
		scanf("%d", &num);
		total += num;
	} while (num != 0);
	printf("result : %d \n\n", total);
	return 0;
}