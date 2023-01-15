#include <stdio.h>

int main(void)
{
	//7-1 (1)
	int rep, num1=0;
	
	printf("rep : ");
	scanf("%d", &rep);

	while (num1 < rep)
	{
		printf("Hello World!");
		num1++;
	}

}