#include <stdio.h>

int main(void)
{
	// 8-1 (1)

	int num1=1, num2=100;
	int result;
	for (result = num1; result<num2 ; result++)
		if (result%7==0 || result%9==0)
			printf("7 또는 9의 배수 : %d\n", result);

	// 8-1 (2)

	int num3, num4;
	printf("num3, num4 : "), scanf("%d %d", &num3, &num4);
	if (num3 >= num4)
		printf("num3 - num4 = %d\n\n", num3 - num4);
	else
		printf("num4 - num3 = %d\n\n", num4 - num3);

	// 8-1 (3)

	double K, E, M;
	double avg;
	char score;
	printf("국어, 영어, 수학 점수 : "), scanf(" %lf %lf %lf", &K, &E, &M);
	avg = (K + E + M) / 3;
	printf("avg = %f\n", avg);

	if (avg >= 90)
		score = 'A';
	else if (avg >= 80)
		score = 'B';
	else if (avg >= 70)
		score = 'C';
	else if (avg >= 50)
		score = 'D';
	else
		score = 'F';
	printf("score = %c\n\n", score);

	// 8-1 (4)

	int num5, num6;
	int result1;
	printf("num5, num6 : "), scanf("%d %d", &num5, &num6);

	result1 = num5 >= num6 ? num5 - num6 : num6 - num5;
	printf("result = %d\n\n", result1);
	
	return 0;
}