#include <stdio.h>

void Prob1(int ary[][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j<9; j++)
			ary[j][i] = (i + 2) * (j + 1);
	}

	for (i = 0; i<3; i++)
	{
		for (j = 0; j < 9; j++)
			printf("%d ", ary[j][i]);
		printf("\n");
	}
}

void Prob2(int ary1[][4], int ary2[][2])
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			ary2[i][j] = ary1[j][i];
			printf("%d ", ary2[i][j]);
		}
		printf("\n");
	}

}

void Prob3(int ary[5][5])
{
	int a, b;
	int person_score;
	int subj_score;
	for (a = 0; a < 4; a++)
	{
		person_score = 0;
		for (b = 0; b < 4; b++)
		{
			person_score += ary[a][b];
		}
		ary[a][4] = person_score;
	}

	for (b = 0; b < 5; b++)
	{
		subj_score = 0;
		for (a = 0; a < 4; a++)
		{
			subj_score += ary[a][b];
		}
		ary[4][b] = subj_score;
	}

	for (a = 0; a < 5; a++)
	{
		for (b = 0; b < 5; b++)
			printf("%d ", ary[a][b]);
		printf("\n");
	}
}



int main(void)
{
	int arr1[9][3];
	Prob1(arr1);
	printf("\n\n");


	int arrA[2][4] = { {1,2,3,4},{5,6,7,8} };
	int arrB[4][2];
	Prob2(arrA, arrB);


	int arr3[5][5];
	char *name[4] = { "Ã¶Èñ","Ã¶¼ö","¿µÈñ","¿µ¼ö"};
	char *subj[4] = {"±¹¾î","¿µ¾î","¼öÇÐ","¿ª»ç"};
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%sÀÇ Á¡¼ö( %s )´Â? : ", name[i], subj[j]), scanf("%d", &arr3[i][j]);
		printf("\n");	
	}

	Prob3(arr3);
}