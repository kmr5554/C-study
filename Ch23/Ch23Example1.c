#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};
typedef struct point Point;

// 2가지 방법으로 "struct point" 표현을 축약 가능

typedef struct point2
{
	int xpos;
	int ypos;
} Point2;




int main(void)
{
	Point pos = { 1,1 };		// struct point pos = {1,1} 을 대체
	Point2 pos2 = { 2,2 };
	printf("point1 : [ %d , %d ] \npoint2 : [ %d , %d ]\n", pos.xpos, pos.ypos, pos2.xpos, pos2.ypos );

}