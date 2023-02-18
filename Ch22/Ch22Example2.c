#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

void Ex4(void)
{
	struct point pos1 = { 1,2 };
	struct point pos2 = { 100,200 };

	struct point* pptr = &pos1;		// pptr : pos1 구조체 변수의 포인터

	(*pptr).xpos += 10;			
	printf("[%d %d]\n", (*pptr).xpos, (*pptr).ypos);

	pptr = &pos2;

	pptr->xpos += 1000;			// -> 이용해서 표현 축약 가능
	printf("[%d %d]\n", pptr->xpos, pptr->ypos);
}

// 구조체 변수 pos1의 주소값은 pos1.xpos의 주소값과 같다.          --> 구조체 변수 주소값 = 첫번째 멤버 주소값

int main(void)
{
	Ex4();
}