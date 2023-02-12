#include <stdio.h>

void Prob1(void)
{
	int * arr1[5];
	int * arr2[3][5];

	int **ptr1= arr1;		// arr1은 포인터 변수인 arr1[0]의 주소를 반환  -->  arr1을 불러오는 ptr1는 double 포인터 변수임.
	int *(*ptr2)[5] = arr2;	// arr2는 포인터 변수 arr2[0][0]의 주소를 반환 --> arr2 불러오는 ptr2는 double 포인터 변수이며, arr2가 2차원 배열이므로 크기 지정 필요
}

void SimpleFuncOne(int ary[], int ary2[])
{
	printf("배열 주소 : %p, %p\n", ary, ary2);
}

void SimpleFuncTwo(int ary[][4], int (*ary2)[4])
{
	printf("배열 주소 : %p, %p", ary, ary2);
}

void Prob2(void)
{
	int arr1[3] = { 1,2,3 };
	int arr2[4] = { 1,2,4 };
	int arr3[3][4] = { 1,2,3,4,5,6,7,8 };
	int arr4[2][4] = { 1,3,5,6,7,8,9,5 };

	SimpleFuncOne(arr1, arr2);
	SimpleFuncTwo(arr3, arr4);
	printf("\n\n");
}

void SimpleFunc3(int **ary, int *(*ary2)[5])
{
	printf("배열 주소 : %p, %p\n", ary, ary2);
}

void SimpleFunc4(int ***ary, int***(*ary2)[5])
{
	printf("배열 주소 : %p, %p", ary, ary2);
}

void Prob3(void)
{
	int* arr1[3];
	int* arr2[3][5];
	int** arr3[5];
	int*** arr4[3][5];

	SimpleFunc3(arr1, arr2);
	SimpleFunc4(arr3, arr4);
	printf("\n\n");
}

void Prob5(void)
{
	int arr[2][2][2] = { 1,2,3,4,5,6,7,8 };
	printf("%d\n\n", arr[1][0][1]);
	printf("%d %d %d %d %d",
		(*(arr+1))[0][1],  (*(*(arr+1)+0))[1],  *(*(*(arr+1)+0)+1),  
		(*(arr[1]+0))[1],  (*(*(arr+1)[0])+1)          );
}

int main(void)
{
	Prob1();
	Prob2();
	Prob3();
	Prob5();
}