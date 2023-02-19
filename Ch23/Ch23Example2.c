#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;


void SwapPoint(Point *ptr1, Point *ptr2)
{
	Point temp = *ptr1;

	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main(void)
{
	Point pos1 = { 2,4 };
	Point pos2 = { 5,7 };

	SwapPoint(&pos1, &pos2);
	printf("point1 : [%d, %d] \npoint2 : [%d, %d]", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);

}