#include <stdio.h>

// 1. 전달인자 o , 반환값 o 인 경우

/*덧셈 함수*/

int Add(int num1, int num2)
{
	int result = num1 + num2;
	return result;
}

// 2. 전달인자 X 또는 반환값 X

void ShowAddResult(int num)		/*printf 대신할 함수*/
{
	printf("result : %d\n", num);   // 반환값 void이므로 반환값 X --> return 문 없음
}
int ReadNum(void)			/*scanf 대신할 함수*/
{
	int num;
	scanf("%d", &num);	// 전달 인자 void 이므로 전달인자 X 
	return num;
}
void HowToUseThisProg(void)
{
	printf("두 개의 정수 입력 : "); // 반환값, 전달인자 모두 void
}

int main(void)
{
	HowToUseThisProg();
	int result, num1, num2;
	num1 = ReadNum();
	num2 = ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);
	return 0;
}
