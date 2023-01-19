#include <stdio.h>

int Minfunc(int, int, int);
int Max(int, int, int);
double CelToFah(double);
double FahToCel(double);
void Fibonacci(int);

int main(void)
{
	// 9-1 (1)
	int num1, num2, num3;
	int Min, Max;
	printf("Á¤¼ö 3°³ : "), scanf("%d %d %d", &num1, &num2, &num3);
	Min = Minfunc(num1, num2, num3);
	Max = Maxfunc(num1, num2, num3);
	printf("Min = %d, Max = %d\n\n", Min, Max);

	// 9-1 (2)
	double cel,fah;
	int sel;
	printf("1. C to F / 2. F to C \n¼±ÅÃ (1 or 2): ");
	scanf("%d",&sel);

	if (sel == 1)
	{
		printf("¼·¾¾ : "), scanf("%lf", &cel);
		printf("conv_È­¾¾ : %f\n", CelToFah(cel));
	}
	else if (sel==2)
	{
		printf("È­¾¾ : "), scanf("%lf", &fah);
		printf("conv_¼·¾¾ : %f\n\n", FahToCel(fah));
	}
	else
	{
		printf("ERROR!\n");
	}

	//9-1 (3)
	int fibonacci;
	printf("ÇÇº¸³ªÄ¡ ¼ö¿­ : "), scanf("%d", &fibonacci);
	Fibonacci(fibonacci);
}

int Minfunc(int n1, int n2, int n3)
{
	if (n1 > n2)
		return (n2 > n3) ? n3 : n2;
	else
		return (n1 > n3) ? n3 : n1;
}
int Maxfunc(int n1, int n2, int n3)
{
	if (n1 > n2)
		return (n1 > n3) ? n1 : n3;
	else
		return (n2 > n3) ? n2 : n3;
}

double CelToFah(double celcius)
{
	return celcius * 1.8 + 32;
}
double FahToCel(double Fahrenheit)
{
	return (Fahrenheit-32)/1.8 ;
}

void Fibonacci(int num4)
{
	int start = 0, next=1;
	int fibonacci;
	printf("%d ", start);
	if (num4 == 1)
		return;
	printf("%d ", next);
	if (num4 == 2)
		return;
	for (int i = 3; i <= num4; i++)
	{
		fibonacci = start + next;
		printf("%d ", fibonacci);
		start = next;
		next = fibonacci;
	}
}
