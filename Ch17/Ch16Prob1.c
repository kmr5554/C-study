#include <stdio.h>

void MaxAndMin(int *ary, int len, int **max, int **min)
{
	int i;
	*max = &ary[0];
	*min = &ary[0];

	for (i = 0; i < len; i++)
	{
		if (ary[i] > **max)
			*max = &ary[i];
		if (ary[i] < **min)
			*min = &ary[i];
	}
}


int main(void)
{
	int* maxPtr;
	int* minPtr;
	int arr[5];

	printf("arr[5] : ");
	for (int i = 0; i < 5; i++)
		scanf("%d", &arr[i]);


	MaxAndMin(arr, sizeof(arr)/sizeof(int),&maxPtr,&minPtr);
	printf("maxPtr, minPtr, max, min : %d, %d, %d, %d", maxPtr, minPtr, *maxPtr, *minPtr);

}