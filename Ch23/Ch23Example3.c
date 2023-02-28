#include <stdio.h>

typedef union ubox
{
	int mem1;
	int mem2;
	double mem3;
} UBox;

int main(void)
{
	UBox ubx;

	ubx.mem3 = 7.5;
	printf("%lf\n", ubx.mem1);
	printf("%lf\n", ubx.mem2);
	printf("%g\n", ubx.mem3);

}