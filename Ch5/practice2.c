#include <stdio.h>

int main(void)
{
	char ch1 = 'A';
	int ch2 = 'Z';

	printf("%c %d \n", ch1, ch1);  // %c : 문자 형태 출력 , %d : 정수 형태 출력
	printf("%c %d \n\n", ch2, ch2); 
	printf("literal int size : %d\n", sizeof(65));
	printf("literal char size : %d\n", sizeof(ch1)); // ch1 형태는 char로 지정되었으므로 1byte
	printf("literal char size : %d\n", sizeof('A'));  // 컴파일러에 의해 'A'는 정수로 변환되므로 int 크기인 4byte

	float num1 = 5.789;			// 실수 기본형은 double이지만 강제로 float로 선언했으므로 데이터 잘릴 수 있음
	float num2 = 3.24f + 5.12F;  // 숫자 뒤에 f 또는 F 붙이면 실수형 상수임
	printf("size : %d, %d\n\n", sizeof(num1),sizeof(num2)); 

	/* 접미사 F:float , U:int, L:long */

	int num3 = 129;		// int는 4바이트로 저장되므로 129는 00000000 00000000 00000000 10000001로 저장
	char ch = num3;		// char는 1바이트로 저장되므로 상위 바이트 손실되어 10000001로 저장 -> 부호가 변하게 됨
	printf("num3 = %d \n", num3);
	printf("char = %d \n", ch);

	/* 1. 데이터 표현범위가 더 작은 자료형으로 변환될 경우 데이터 정보 손실됨
	   2. 자료형 다른 정수와 실수의 연산 시에 자동적으로 실수로 변환됨
	   3. 정수 자료형 연산결과가 실수이면 정수로 변환되어 저장됨 */

	return 0;
}