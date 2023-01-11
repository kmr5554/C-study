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

	float num1 = 5.789;		
	float num2 = 3.24f + 5.12F;
	printf("size : %d, %d\n", sizeof(num1),sizeof(num2));
}