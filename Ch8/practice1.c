#include <stdio.h>

int main(void)
{
	int opt;
	double num1, num2;
	double result;

	printf("1.����  2.����  3.����  4.������\n");
	printf("���� : ");
	scanf("%d", &opt);
	printf("num1, num2 :");
	scanf("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	if (opt == 2)
		result = num1 - num2;
	if (opt == 3)
		result = num1 * num2;
	if (opt == 4)
		result == num1 / num2;
	printf("result : %f\n\n", result);

	//////////////// 3��� �̻� if ~ else ��/////////////////////////
	int opt1;
	double num3, num4;
	double result1;

	printf("1.����  2.����  3.����  4.������\n");
	printf("���� : ");
	scanf("%d", &opt1);
	printf("num3, num4 :");
	scanf("%lf %lf", &num3, &num4);

	if (opt1 == 1)
		result1 = num3 + num4;
	else if (opt1 == 2)
		result1 = num3 - num4;
	else if (opt1 == 3)
		result1 = num3 * num4;
	else
		result1 = num3 / num4;
	printf("result : %f\n\n", result1);

	///////////// �� �� ���� ������ ////////////////
	
	int num, abs;
	printf("���� : ");
	scanf("%d", &num);

	abs = num > 0 ? num : num * (-1);  /* ���� :   ���� =  (����) ? (���� �� ��ȯ��) : (������ �� ��ȯ��)   ��  */
	printf("abs : %d\n\n", abs);
	return 0;
}