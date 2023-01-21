#include <stdio.h>

void Arrpractice(void)
{
	int OneDimArr[4]; //  배열 이루는 요소 : int형 , 배열 이름 : OneDimArr , 배열 길이 : [4]
	float arr1[10];	  // 길이 10의 float형 1차원 배열
	double arr2[12];	  // 길이 12의 double형 1차원 배열
	
	/* int len = 20;
	   int arr3[len]   :  visual studio에서는 배열 크기를 변수로 할당할 수가 없음  */
}

int main(void)
{
	int arr[3];
	arr[0] = 10, arr[1] = 20, arr[2] = 30 // arr[3] = 40 같이 배열 크기보다 큰 인덱스를 사용하면 컴파일 에러 발생 가능
	
	int sum = 0, i;
	for (i = 0; i < 3; i++)
		sum += arr[i];
	printf("result : %d\n", sum);
	return 0;
}
