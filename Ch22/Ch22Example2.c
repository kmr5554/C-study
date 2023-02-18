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

	struct point* pptr = &pos1;		// pptr : pos1 ����ü ������ ������

	(*pptr).xpos += 10;			
	printf("[%d %d]\n", (*pptr).xpos, (*pptr).ypos);

	pptr = &pos2;

	pptr->xpos += 1000;			// -> �̿��ؼ� ǥ�� ��� ����
	printf("[%d %d]\n", pptr->xpos, pptr->ypos);
}

// ����ü ���� pos1�� �ּҰ��� pos1.xpos�� �ּҰ��� ����.          --> ����ü ���� �ּҰ� = ù��° ��� �ּҰ�

int main(void)
{
	Ex4();
}