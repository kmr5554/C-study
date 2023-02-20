#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;


void SwapPoint(Point *ptr1, Point *ptr2)
{
	Point temp = *ptr1;		// pos1을 temp에 복사

	*ptr1 = *ptr2;
	*ptr2 = temp;
}

void Prob1(void)
{
	Point pos1 = { 2,4 };
	Point pos2 = { 5,7 };

	SwapPoint(&pos1, &pos2);
	printf("point1 : [%d, %d] \npoint2 : [%d, %d]\n\n", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);
}



Point *Rectangle_0(Point p1, Point p2)
{
	Point pos_fair[2];

	pos_fair[0] = (Point){ p1.xpos, p2.ypos};
	pos_fair[1] = (Point){ p2.xpos, p1.ypos };
	return pos_fair;
}

void CalcArea_0(Point* p)
{
	int area;
	area = (p[2].ypos-p[0].ypos)*(p[3].xpos-p[0].xpos);

	printf("area : %d\n", area);
}

void ShowPoint_0(Point* p)
{
	int i;
	for (i = 0; i < 4; i++)
		printf("point %d : [%d, %d]\n", i + 1, p[i].xpos, p[i].ypos);
}

void Prob2_0(void)
{
	Point pos1 = { 0,0 };
	Point pos2 = { 100,100 };
	Point rectangle[4];

	rectangle[0] = pos1;
	rectangle[1] = pos2;
	rectangle[2] = Rectangle_0(pos1, pos2)[0];
	rectangle[3] = Rectangle_0(pos1, pos2)[1];

	CalcArea_0(rectangle);
	ShowPoint_0(rectangle);
}

////////////////////////////////////////////////////


typedef struct Rectangle
{
	Point L;
	Point R;
}rec;

void CalcArea(rec p)
{
	int area;
	area = (p.R.ypos - p.L.ypos) * (p.R.xpos - p.L.xpos);
	printf("\narea : %d\n", area);
}

void ShowPoint(rec fair1, rec fair2 )
{
	Point result[4] = { fair1.L, fair1.R, fair2.L, fair2.R };

	for (int i = 0; i < 4; i++)
		printf("point %d : [%d %d]\n", i + 1, result[i].xpos, result[i].ypos);

}
void Prob2(void)
{
	Point pos1 = { 0,0 };
	Point pos2 = { 100,100 };
	rec p1 = { pos1, pos2 };

	rec p2;
	p2.L = (Point){ p1.L.xpos, p1.R.ypos };
	p2.R = (Point){ p1.R.xpos, p1.L.ypos };

	CalcArea(p1);
	ShowPoint(p1,p2);
}




int main(void)
{
	Prob1();
	Prob2_0();
	Prob2();
	return 0;
}