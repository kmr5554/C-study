#include <stdio.h>

void NoReturnType(int num)
{
	if (num < 0)
		return;		// 여기서 return 뒤에 반환값 명시 x 이유 : 반환값이 void이므로 return은 함수 종료 의미만 가짐
}


int Increment(int);	// increment 함수 선언 (전달인자 변수명 안적어도 됨)
int main(void)
{
	int num = 2;
	num = Increment(num);  // 앞에서 함수 선언 했으므로 main이 함수보다 먼저 정의되어도 컴파일 가능 
	return 0;
}
int Increment(int n)
{
	n++;
	return n;
}