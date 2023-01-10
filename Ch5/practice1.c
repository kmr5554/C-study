#include <stdio.h>

int main(void)
{
	char ch = 9; // 128 이하 크기
	int inum = 1052;
	double num = 3.1415;  // 실수 표현

	printf("ch 크기 : %d\n", sizeof(ch));   // 크기 : 저장 바이트
	printf("inum 크기 : %d\n", sizeof(inum));
	printf("num 크기 : %d\n\n", sizeof(num));

	char num1 = 1, num2 = 2, result1 = 0;
	result1 = num1 + num2;

	printf("num1,num2 크기: %d, %d\n", sizeof(num1), sizeof(num2));
	printf("ch added 크기 : %d\n", sizeof(num1 + num2));	// 연산은 가장 빠른 자료형으로 변환하므로 int 크기로 출력됨
	printf("result1 크기  : %d\n", sizeof(result1));		// 변수 지정 형식인 char의 크기로 출력됨
}