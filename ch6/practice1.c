#include <stdio.h>

int main(void)
{
	int num1 = 7, num2 = 13;
	printf("%o, %#o \n", num1, num1);  // %o는 8진수 정수 표현 -> 7  /  8진수임을 보여주고 싶으면 %#o 사용 -> 07
	printf("%x, %#x \n\n", num2, num2);  // %x는 16진수 정수 표현 -> d / 16진수임을 보여주고 싶으면 %#x 사용 -> 0xd

	double d1 = 1.23e-3;
	double d2 = 1.23e-6;
	printf("%g %g \n", d1, d2);		// %g는 소수점 작으면 실수 형태, 소수점 자리 많으면 e 형태로 출력
	return 0;

}