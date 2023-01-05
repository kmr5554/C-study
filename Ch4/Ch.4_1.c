#include <stdio.h>

int main(void)
{
	int num1 = 0xA7, num2 = 0x43;   // 앞에 0x : 16진수 
	int num3 = 032, num4 = 024;		// 앞에 0  : 8진수  

	printf("0xA7 : %d \n", num1), printf("0x43 : %d \n", num2);  // A7 : 16x10 + 7 = 167,  43 : 16x4 + 3 = 67
	printf("032 : %d \n", num3), printf("024 : %d \n", num4);	 // 32 :  8x3 + 2  = 26,   24 :  8x2 + 4 = 20 

	return 0;
}
