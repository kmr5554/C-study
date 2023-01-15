#include <stdio.h>

int main(void)
{
	int total = 0, num = 0;

	do    // 반복문 무조건 1회 이상 실행 시에는 do ~ while 을 사용
	{
		printf("정수(0 to quit) : ");
		scanf("%d", &num);
		total += num;
	} while (num != 0);
	printf("result : %d \n\n", total);
	return 0;
}