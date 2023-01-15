#include <stdio.h>

int main(void)
{
	int num = 0;

	while (num < 5)
	{
		printf("Hello world! %d\n", num);
		num++;  // printf랑 같은 줄에 있어도 됨
	}

	int dan, num1 = 1; //dan은 자료형만 지정, num1은 숫자까지 저장
	printf("몇 단? : ");
	scanf("%d", &dan);

	while (num1 < 10)
	{
		printf("%d X %d = %d\n", dan, num1, dan * num1);
		num1+=1;
	}
}