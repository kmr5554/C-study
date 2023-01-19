#include <stdio.h>

int main(void)
{
	int num = 1;
	if (num == 1)
	{
		int num = 7;   // if 문 내에서 동일한 변수명이 선언되면 if문 내의 11행 num은
		num += 10;	   // 5행이 아닌 8행의 num을 가리키게 됨.
					   // 만약에 8행 주석처리 시에는 11행의 num이 5행의 num으로 계산됨
		printf(" if문 내 지역변수 : %d\n", num);
	}
	printf("main의 지역변수 : %d\n", num);
	return 0;
}