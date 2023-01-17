#include <stdio.h>

int main(void)
{
	int sum = 0, num = 0;
	while (1)
	{
		sum += num;
		if (sum > 5000)
			break;	// while문을 종료시킴
		num++;
	}
	printf("sum : %d, num : %d\n\n", sum, num);

	int num1;
	printf("start\n");
	for (num1 = 1; num1 < 20; num1++)
	{
		if (num1 % 2 == 0 || num1 % 3 == 0)
			continue;			// continue 아래 생략하고 반복문 조건문으로 돌아감
		printf("%d ", num1);	// if문 만족 시 printf 생략되고 num1++ 실행 후 while의 조건문으로 돌아감
	}
}