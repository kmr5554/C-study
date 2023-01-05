#include <stdio.h>

int main(void)
{
	int num1 = 12;
	int num2 = 12;					   // ++가 뒤에 붙으면 선연산 후증가, 앞에붙으면 선증가 후연산

	printf("num1++ : %d\n", num1++);   // num1++ 의미 : num1을 먼저 연산해 %d에 대입 후 num1값 1 증가 (num1=12 -> 대입 -> num1=13
	printf("++num1 : %d\n", ++num1);   // ++num1 의미 : num1값 1 먼저 증가 후 num1을 연산해 %d에 대입 (num1=13 -> num1=14 -> 대입) 
	
	int num3 = (num1--) + 10;		   // 소괄호 넣더라도 원래 num1값으로 덧셈 후 num1값 1 감소
	printf("num3 = %d, num1 = %d\n", num3, num1);  
	return 0;
}