#include <stdio.h>

void swap(int *ptr1, int *ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

void ex1(void)
{
	int num1 = 10, num2 = 20;
	printf("num1 : %d, num2 : %d\n", num1, num2);
	swap(&num1, &num2);							

	// num1,2가 저장된 주소에서 직접 num1,2을 swap

	printf("num1 : %d, num2 : %d\n\n", num1, num2);
}

// scanf에서 int를 입력할 때는 int num이 저장된 주소를 통해 내용물을 바꿔줘야 하므로 &num을 인자로 받음
// 반면 문자를 입력할 때는 str 자체가 문자열이 저장된 주소의 포인터 역할을 하므로 &가 필요없음

int main(void)
{
	ex1();
}