#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	printf(" 정수 3개 : ");
	scanf("%d %o %x", &num1, &num2, &num3);  // num1은 10진수, num2는 8진수, num3는 16진수 기준으로 12이므로 각각 10진수에서 의미하는 값 다름
	printf("입력된 정수 : %d, %d, %d\n\n", num1, num2, num3);

	/*
	1. float / double / long double의 입력(scanf)에서 서식문자 : %f, %lf, %Lf
	2. float / double / long double의 출력(printf)에서 서식문자 : %f, %f, %Lf
	3. 문자열의 경우 입,출력 모두 %s 사용
	*/
	return 0;
}