#include <stdio.h>

void problem1(void)
{
	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1; // ptr2는 ptr1과 같음 --> num 저장된 주소 공유
	(*ptr1)++, (*ptr2)++; // 둘 다 num을 증가시킴
	printf("%d\n", num);
}

void problem2(void)
{
	int num3 = 10, num4 = 20;
	int* ptr1 = &num3, * ptr2 = &num4;
	(*ptr1)+=10, (*ptr2)-=10;
	ptr1 = &num4;	
	ptr2 = &num3;	

	// *ptr1=&num4 할 경우 에러 발생
	// 이유 : *ptr1는 num3을 의미하므로 num3 = &num4 꼴이 되기 때문

	printf("ptr1 : %d, ptr2 :  %d", *ptr1, *ptr2);
}

int main(void)
{
	// 1번 문제
	problem1();

	// 2번 문제
	problem2();

}