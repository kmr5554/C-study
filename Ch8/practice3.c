#include <stdio.h>

int main(void)
{
	int num;
	printf("num (2 or 3) : "), scanf("%d", &num);

	switch (num)	// num : switch�� ����� ����, num�� ���� ���� case ����
	{
	case 2:
		printf("A\n");
		break;	// num==2 �̸� case 2 ���� �� break�Ͽ� �ٸ� case ���� ����
	case 3:
		printf("B\n");
		break;
	default :	// ���ǵ� case ���� ������ ���� num�� ���޵Ǵ� ��� ����
		printf("Error\n");
		break;
	}

	char sel;
	printf("M / m / E / e ? :  "), scanf(" %c", &sel);
	switch (sel)
	{
	case 'M': case 'm': 		// �߰��� break�� ������ case ���� ���� ���� �� ����
		printf("Morning\n");
		break;
	case 'E': case 'e':
		printf("Evening\n");
		break;
	default:
		printf("Error!\n");
	}
	
	int num1;
	printf("num : "), scanf("%d", &num);
	
	if (num == 1)
		goto ONE;	// goto ~ : ���ǵ� Ư�� ���̺�� ���� ��ġ �̵���Ŵ, �� ��� X
	else if (num == 2)
		goto TWO;
	else
		goto OTHER;

ONE:
	printf("1\n");
	goto END;
TWO:
	printf("2\n");
	goto END;
OTHER:
	printf("Error\n");
END:
	return 0;


		

}