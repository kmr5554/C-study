#include <stdio.h>
#include <stdlib.h>		// 제공 함수 :		int rand (void)			  -->  pseudo 난수
						//			   void srand(unsigned int seed)  -->  난수 seed값 받는 함수

#include <time.h>


void SeedRandNum(void)
{
	printf("SeedRandNum\n\n");
	int i;
	printf("난수 범위 : 0 ~ %d \n\n", RAND_MAX);

	int seed;
	printf("seed : "), scanf("%d", &seed);
	printf("\n");

	srand(seed);		
	for (i = 0; i < 5; i++)
		printf("난수 : %d \n", rand());
}

void TimeRandNum(void)
{
	int j;
	srand((int)time(NULL));			// time (NULL) : 현재 시간의 int형   -->   seed값으로 난수 설정 
	
	printf("\n\nTimeRandNum\n\n");

	for (j = 0; j < 5; j++)
		printf("난수 : %d \n", rand());
	printf("\n\n");
}

void DiceRand(void)
{
	srand((int)time(NULL));

	printf("주사위 1의 결과 %d\n",rand()%6+1);
	printf("주사의 2의 결과 %d\n",rand()%6+1);
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