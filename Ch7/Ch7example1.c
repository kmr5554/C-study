#include <stdio.h>

/* /////////////////           5번 틀림                   //////////////*/

int main(void)
{
	//7-1 (1)

	int rep, num1=0;
	printf("rep : ");
	scanf("%d", &rep);

	while (num1 < rep)
		printf("Hello World!\n"), num1++;
	printf("\n");

	//7-1 (2)
	
	int rep2, num2=1;
	printf("rep2 : ");
	scanf("%d", &rep2);

	while (num2 <= rep2)
		printf("%d  ", 3 * num2), num2++;
	printf("\n\n");

	//7-1 (3)

	int num3, plus=1;
	printf("num3 : ");
	scanf("%d", &num3);

	while (plus != 0)
	{
		printf("plus : ");
		scanf("%d", &plus), num3 += plus;
	}
	printf("result : %d\n\n", num3);
	
	//7-1 (4)

	int dan, num4=9;
	printf("dan : ");
	scanf("%d", &dan);

	while (num4 > 0)
		printf("%d X %d = %d\n", dan, num4, dan * num4), num4--;	
	printf("\n");

	//7-1 (5)

	int num5, i=1, input, total=0;

	printf("# of int : ");
	scanf("%d", &num5);

	while (i++ <= num5)    // while 조건문에서 바로 i++ 사용 가능
	{
		printf("%d 번째 수 :  ", i);
		scanf("%d", &input);
		total += input;
	}
	printf("average : %f", (double)total / num5);  // (double)로 자료형 변환하는 법 중요

	return 0;
}