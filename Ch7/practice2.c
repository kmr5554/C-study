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


	for (int num1 = 0; num1 < 3; num1++)  //for �� ���� ���� ����, ���ǹ�, ������ �ϳ��� ���� �� ����
		printf("Hi\n");
	printf("\n");


	double total1 = 0.0, input = 0.0;
	int num2 = 0;

	for (; input >= 0.0; )
	{
		total1 += input;
		printf("input (minus to quit) : ");
		scanf("%lf", &input);
		num2++;
	}
	printf("avg : %f", total1 / (num2 - 1));

	return 0;
}