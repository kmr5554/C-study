#include <stdio.h>

int main(void)
{
	int sum = 0, num = 0;
	while (1)
	{
		sum += num;
		if (sum > 5000)
			break;	// while���� �����Ŵ
		num++;
	}
	printf("sum : %d, num : %d\n\n", sum, num);

	int num1;
	printf("start\n");
	for (num1 = 1; num1 < 20; num1++)
	{
		if (num1 % 2 == 0 || num1 % 3 == 0)
			continue;			// continue �Ʒ� �����ϰ� �ݺ��� ���ǹ����� ���ư�
		printf("%d ", num1);	// if�� ���� �� printf �����ǰ� num1++ ���� �� while�� ���ǹ����� ���ư�
	}
}