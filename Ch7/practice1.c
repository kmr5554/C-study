#include <stdio.h>

int main(void)
{
	int num = 0;

	while (num < 5)
	{
		printf("Hello world! %d\n", num);
		num++;  // printf�� ���� �ٿ� �־ ��
	}

	int dan, num1 = 1; //dan�� �ڷ����� ����, num1�� ���ڱ��� ����
	printf("�� ��? : ");
	scanf("%d", &dan);

	while (num1 < 10)
	{
		printf("%d X %d = %d\n", dan, num1, dan * num1);
		num1+=1;
	}
}