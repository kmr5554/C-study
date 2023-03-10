#include <stdio.h>

void Add(int);
int num1;		// 전역변수 num1, 기본 0으로 초기화됨

int Add2(int);
int num2 = 1;	// 전역변수 num2 = 1

void Add(int val)
{
	num1 += val;
}

int Add2(int val2)
{
	int num2 = 9;	
	num2 += val2;
	return num2;	// Add2 에서 반환되는 지역변수 num2 = 9 + val2
}

void SimpleFunc(void)
{
	static int num3 = 0;		//static 선언된 지역변수 특징 : 1. 선언된 함수 내에서만 접근 (지역변수)  / 2. 함수 종료되어도 초기화 X (전역변수)
	int num4 = 0;
	num3++, num4++;				// num3는 static이므로 함수 종료하거나 반복하더라도 다시 0으로 초기화되지 않으며 23행의 num3 = 0이 무시됨 
								// num4는 함수 끝나면 다시 0으로 초기화
	printf("static : %d , local : %d\n", num3, num4);
}

int main(void)
{
	printf("num1 : %d", num1);  // 결과 : 0
	Add(3), num1++;				
	printf("num1 : %d", num1);	// 결과 : 4

	int num2 = 5;				// main의 지역변수 num2 = 5
	printf("num2 : %d\n", num2);
	printf("num2 : %d\n", Add2(3));  // Add2의 지역변수 num2 = 12
	
	/* 전역변수와 이름 같은 지역변수 존재 시 전역변수는 가려지게 됨. */

	for (int i = 0; i < 3; i++)
		SimpleFunc();			// 결과 : static num3는 1, 2, 3으로 증가 & local num4는 1로 고정
	return 0;
}