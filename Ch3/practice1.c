#include <stdio.h>

int main(void)
{
	int num;     // int : 정수 저장 가능한 메모리 할당, num: 메모리 공간명
	num = 20;    // 변수 초기화 후 값 저장
	printf("%d\n\n", num);

	// int num1, num2;   -> 변수 초기화하지 않아 에러뜸 
	
	int num3 = 30, num4 = 40;			// 할당 및 저장 동시에 가능
	int result = num3 + num4;			//가급적이면 int들은 전부 맨앞에서 선언(변수 할당을 맨 앞에서)
	printf("num3 = %d \nnum4 = %d \nnum3 + num4 = %d \n",  num3, num4, result);
	
	return 0;	
}