#include <stdio.h>

void ShowArayElem(int *param, int len)	

// arr1 : {1,2,3}의 배열 주소 나타내는 포인터 & 배열 이름 역할
//int *param=arr1 이므로 param또한 배열 주소 가리키는 pointer 변수

{
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", param[i]);	// param[i]는 arr[i]와 같은 기능이라고 보면 됨
	printf("\n");
}

void ex1(void)
{
	int arr1[3] = { 1,2,3 };
	int arr2[5] = { 4,5,6,7,8 };
	ShowArayElem(arr1, sizeof(arr1) / sizeof(int));
	ShowArayElem(arr2, sizeof(arr2) / sizeof(int));
	return 0;
}

// 함수의 인자로 사용되는 매개변수의 경우 int * param 대신 int param[ ]으로 대체 가능

void AddArayElem(int *param,int len,int add)

// 함수 내에서 arr 크기는 측정 불가 :  배열 arr의 크기가 아닌 포인터 변수 arr의 크기가 측정되기 때문

{
	int i;
	for (i = 0; i < len; i++)
		param[i] += add;	// param은 arr와 같이 배열 주소를 나타내므로 배열 내의 원소를 바꿔주어 함수가 종료되어도 원소가 변경되어 있음
}

void ex2(void)
{
	int arr[3] = { 1,2,3 };
	AddArayElem(arr, sizeof(arr) / sizeof(int), 1);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));
}

void practice(int* param, int len)
{
	printf("외부 : %d, 내부 : %d", len, sizeof(param) / sizeof(int));	
	
	// sizeof(arr) : 배열이름 arr의 바이트 크기		   (arr 배열의 크기)
	// sizeof(param) : 포인터 변수 param의 바이트 크기 (arr 주소값이 담긴 메모리의 크기)
}

void ex3(void)
{
	int arr[3] = { 1,2,3 };
	practice(arr, sizeof(arr) / sizeof(int));
}

int main(void)
{
	ex1(), printf("\n");
	ex2(), printf("\n");
	ex3(), printf("\n");
}

