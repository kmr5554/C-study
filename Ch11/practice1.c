#include <stdio.h>

void Arrpractice(void)
{
	int OneDimArr[4]; //  배열 이루는 요소 : int형 , 배열 이름 : OneDimArr , 배열 길이 : [4]
	float arr1[10];	  // 길이 10의 float형 1차원 배열
	double arr2[12];	  // 길이 12의 double형 1차원 배열
	
	/* int len = 20;
	   int arr3[len]   :  visual studio에서는 배열 크기를 변수로 할당할 수가 없음  */
}

void Arrpractice2(void)
{
	int arr[3];
	arr[0] = 10, arr[1] = 20, arr[2] = 30; // arr[3] = 40 같이 배열 크기보다 큰 인덱스를 사용하면 컴파일 에러 발생 가능
	
	int sum = 0, i;
	for (i = 0; i < 3; i++)
		sum += arr[i];
	printf("result : %d\n", sum);
	return 0;
}

void Arrpractice3(void)
{
	int arr1[5] = { 1,2,3,4,5 };	 // 선언과 동시에 요소 초기화 가능
	int arr2[ ] = { 1,2,3,4,5,6,7 }; // 자동으로 배열 크기 정해짐
	int arr3[5] = { 1,2,3 };		 // 4,5번째 요소는 0으로 채워짐

	int ar1len, ar2len, ar3len, i;
	printf("arr1,2,3 크기 : %d, %d, %d\n", sizeof(arr1), sizeof(arr2), sizeof(arr3));
	ar1len = sizeof(arr1) / sizeof(int);	// arr1의 사이즈 : int사이즈 4 x 배열 크기 5 = 20
	ar2len = sizeof(arr2) / sizeof(int);
	ar3len = sizeof(arr3) / sizeof(int);

	for (i = 0; i < ar1len; i++)	// ar1len : arr1의 크기 반환
		printf("%d ", arr1[i]);
	return 0;
}

int main(void)
{
	Arrpractice3();
	return 0;
}