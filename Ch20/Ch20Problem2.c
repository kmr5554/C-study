#include <stdio.h>
#include <stdlib.h>		// ���� �Լ� :		int rand (void)			  -->  pseudo ����
						//			   void srand(unsigned int seed)  -->  ���� seed�� �޴� �Լ�

#include <time.h>


void SeedRandNum(void)
{
	printf("SeedRandNum\n\n");
	int i;
	printf("���� ���� : 0 ~ %d \n\n", RAND_MAX);

	int seed;
	printf("seed : "), scanf("%d", &seed);
	printf("\n");

	srand(seed);		
	for (i = 0; i < 5; i++)
		printf("���� : %d \n", rand());
}

void TimeRandNum(void)
{
	int j;
	srand((int)time(NULL));			// time (NULL) : ���� �ð��� int��   -->   seed������ ���� ���� 
	
	printf("\n\nTimeRandNum\n\n");

	for (j = 0; j < 5; j++)
		printf("���� : %d \n", rand());
	printf("\n\n");
}

void DiceRand(void)
{
	srand((int)time(NULL));

	printf("�ֻ��� 1�� ��� %d\n",rand()%6+1);
	printf("�ֻ��� 2�� ��� %d\n",rand()%6+1);
}


void Prob3(void)
{
	SeedRandNum();
	TimeRandNum();
	DiceRand();


}

int main(void)
{
	Prob3();
	
	return 0;
}