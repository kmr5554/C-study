#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};
typedef struct point Point;

// 2���� ������� "struct point" ǥ���� ��� ����

typedef struct point2		// �� �� point2�� ������ �ǹ̰� �����Ƿ� �����ص� ��.
{
	int xpos;
	int ypos;
} Point2;




int main(void)
{
	Point pos = { 1,1 };		// struct point pos = {1,1} �� ��ü
	Point2 pos2 = { 2,2 };
	printf("point1 : [ %d , %d ] \npoint2 : [ %d , %d ]\n", pos.xpos, pos.ypos, pos2.xpos, pos2.ypos );

}