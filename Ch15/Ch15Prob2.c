#include <stdio.h>

int pow(int n)
{
	int result = 1;
	for (int i = 0; i < n; i++)
		result *= 2;
	return result;
}

void Dec_to_Bi(int n)
{
	int power = 1, i = 0;
	if (n == 0)
		printf("0");
	else
	{
		while (n >= power)
			power *= 2, i++; // i는 자릿수에 해당, power는 n 바로 위의 2의 거듭제곱
		printf("1");
		n = n - power / 2;	 // 맨 앞에 1 출력 시 남은 값 계산 

		for (int count = 2; count <= i; count++)	// 다음 자리에 1이 들어갈 지 결정
			if (n >= pow(i - count))	// 남은 값이 2 ^ [ 전체 자리수 - (처음~현재 자리수) ]보다 크면 다음 자리에 1 들어감  
			{
				printf("1");
				n = n - pow(i - count);	// 1 넣고 남은 값 계산
			}
			else
				printf("0");		// 1이 아닌 경우 0 넣음
	}
}

int main(void)
{
	int num2;
	printf("10진수 num : "), scanf("%d", &num2);
	Dec_to_Bi(num2);
}