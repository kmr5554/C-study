#include <stdio.h>

int main(void)

{	//Example 4-1

	int num;
	printf("정수 입력 : ");
	scanf("%d", &num);

	num = ~num;
	num += 1;
	printf("changed 정수 : %d\n\n", num);

	//Example 4-2

	int num2 = 3;
	num2 = num2 << 3;
	num2 = num2 >> 2;

	printf(" 3 x 8 / 4 = %d\n", num2);

	return 0;
}