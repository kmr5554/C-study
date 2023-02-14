#include <stdio.h>

void turnarr(int (*ary)[4])
{
	/*	전의 y좌표->후의 x좌표
		3-전의 x좌표 -> 후의 y좌표?

		00	01	02	03	10	11	12	13	
		03	13	23	33	02	12	22	32	
	*/
	int i, j;
	int ary2[4][4];
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			ary2[i][j] = ary[i][j];
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			ary[i][j] = ary2[3 - j][i];
	}
	printf("\n\n>> 시계방향 90도 회전 : \n\n");
}

void Prob1()
{
	int arr[4][4];
	int n = 1;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = n;
			n++;
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	turnarr(arr);

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("%d ", arr[i][j]);
		
		printf("\n");
	}
}

int main(void)
{
	Prob1();
	return 0;
}