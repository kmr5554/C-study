#include <stdio.h>

// 포인터 변수 : 메모리 주소 값을 저장하는 변수

void pointer(void)
{
	int num = 7;
	int* pnum;		// 포인터 변수 pnum 선언
	pnum = &num;	// pnum에 변수 num의 주소값 저장 , & 의미 : 우측 피연산자의 주소값을 반환시키는 연산자
	return 0;
}

void pointer2(void)
{
	int num1 = 5, num2 = 10;
	// double * pnum1 = &num1;   --> 쓰면 안 되는 이유 : 피연산자의 자료형과 포인터변수 자료형이 달라 * 연산 시 문제 발생
	int* pnum = &num1;
	*pnum = 20;		// pnum이 가리키는 변수에 20 저장
	pnum = &num2;	// pnum이 가리키는 변수를 num1에서 num2로 변경
	*pnum = 40;		// num2에 40 저장
	printf("%d \n", *pnum);
}

void pointer3(void)
{
	//int* ptr;			--> 쓰면 안 되는 이유: ptr 포인터가 어디를 가리키는지 모르는 상태에서 저장을 하려 하면 메모리 손상되므로 에러 발생
	//*ptr = 200;
	int* ptr1 = 0;		// 포인터 변수를 선언만 해놓고 나중에 주소 지정하려면 0 또는 NULL 사용
	int* ptr2 = NULL;

}

int main(void)
{
	pointer2();
	pointer3();
	return 0;
}