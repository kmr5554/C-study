#include <stdio.h>

int main(void)
{
	int num1 = 10;
	int num2 = 20;
	int result1 = (num1 == 10 && num2 == 20);
	int result2 = (num1 < 10 || num2>10);
	int result3 = (!num2);
	printf("result1=%d \nresult2=%d \nresult3=%d", result1, result2, result3);
	return 0;
}