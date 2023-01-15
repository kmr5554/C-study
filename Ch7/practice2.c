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


	for (int num1 = 0; num1 < 3; num1++)  //for 문 쓰면 변수 지정, 조건문, 증감식 하나로 묶을 수 있음
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