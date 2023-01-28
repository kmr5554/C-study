#include <stdio.h>

void ex1(void)
{
	int arr[4] = { 1,2,3,4 };		// 배열 이름 = 상수 포인터 (값 변경 x)
	printf("array name : %p\n", arr);	// %p : 배열이름의 포인터가 갖는 주소참조값 반환
	for (int i=0;i<(sizeof(arr)/sizeof(int)) ; i++)	
	printf("element %d : %p\n", i+1, &arr[i]);	// &arr[i] : 배열 요소는 포인터가 아니므로 &통해 배열의 i번째 요소가 갖는 주소참조값 반환
}

void ex2(void)
{
	int arr1[3] = { 1,2,3 };
	double arr2[3] = { 1.1,2.2,3.3 };
	printf("%d %g\n", *arr1, *arr2);	// 배열 이름은 배열 첫 요소의 주소 참조값을 갖는 포인터

	*arr1 += 100, * arr2 += 100.5;		// 배열 첫 요소값만 증가시킴
	printf("%d %g\n\n", arr1[0], arr2[0]);
}

void ex3(void)
{
	int arr[3] = { 1,2,3 };
	int* ptr = &arr[0];	//ptr은 배열 첫 요소의 주소참조값 포인터
	printf("ptr[0]= %d , arr[0]= %d \n", ptr[0], arr[0]);	
	
	// pointer[ ] 꼴 의미 : 포인터 주소가 가리키는 메모리에 저장된 n번째 요소 반환

	printf("*ptr : %d, *arr : %d\n\n", *ptr, *arr); //위와 동일결과 출력됨
}

void ex4(void)
{
	int arr[3] = { 11,22,33 };
	int* ptr = arr;
	printf("%d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2));	 // *(ptr+1)은 원래 ptr에 저장된 값 변화 X  VS.  *(++ptr)은 원래 ptr에 저장된 값을 변화
	
	// 포인터 n 증가 = n x sizeof(포인터 type) 만큼 주소 참조값 증가 = 포인터가 가리키는 요소 index가 n 증가
	
	// 따라서 arr[i] = *(arr+i) 이다.
}

int main(void)
{
	ex1();
	ex2();
	ex3();
	ex4();
}