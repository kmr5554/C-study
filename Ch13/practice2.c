#include <stdio.h>

void ex1(void)
{
	char str1[] = "My string";		// "변수" 형태 문자열을 저장한 str1이라는 배열 선언
	char* str2 = "Your string";		// 자동으로 저장된 "상수" 형태 문자열의 첫 요소에 대한 주소 참조값 가진 포인터 선언

	// str1 = "our string" --> 불가능 이유 : str1은 상수 포인터이므로 주소참조값은 고정되어 있음, 대신 배열 안의 내용 변경 가능

	str2 = "Our string";	// str2는 변수형 포인터이므로 포인터 대상을 변경 가능, 대신 포인터 대상 안의 내용은 변경 불가

	printf("Hello World\n\n");

	// 상수문자열 입력시에는 문자열이 자동 저장 후 주소값으로 변환되어 printf(문자열 주소) 꼴로 처리

	// 어떤 함수의 입력 인자로 상수 문자열을 받고 싶을 때 => void func (char *str) 형태 로 전달받아야 함
}


void ex2(void)
{
	int num1 = 10, num2 = 20, num3 = 30;
	int* arr[3] = { &num1, &num2, &num3 };	// arr의 각 원소는 각 num이 저장된 주소 참조값

	printf("%p %p %p\n", arr[0], arr[1], arr[2]);
	printf("%d %d %d\n", *arr[0], *arr[1], *arr[2]);	// 각 arr 원소에 저장된 주소 참조값이 가리키는 변수를 불러옴

	char * strArr[3] = { "Simple","String","Array" };	// 각 상수 문자열이 저장된 주소참조값을 원소로 갖는 strArr 배열
	printf("%p %p %p\n", strArr[0], strArr[1], strArr[2]);
	printf("%s %s %s\n\n", strArr[0], strArr[1], strArr[2]);


}

int main(void)
{
	ex1();
	ex2();


}