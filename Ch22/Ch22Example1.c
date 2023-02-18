#include <stdio.h>
#include <string.h>

struct point
{
	int xpos;
	int ypos;
};

void Ex1(void)
{
	struct point pos1, pos2;
	fputs("point1 pos : ",stdout);
	scanf("%d %d", &pos1.xpos, &pos1.ypos);
	printf("point1 pos : %d %d\n\n", pos1.xpos, pos1.ypos);
}

struct person
{
	char name[20];
	int age;
};

void Ex2(void)
{
	struct person man1, man2;
	strcpy(man1.name, "홍길동");	// 배열에 문자열 저장할땐 strcpy가 편함 (또는 다른 문자열 변수 정한 후 for문으로 같게 만들수도) 
	man1.age = 23;

	printf("이름 : "), scanf("%s", &man2.name);
	printf("나이 : "), scanf("%d", &man2.age);

	printf("이름 : %s, %s\n", man1.name, man2.name);
	printf("나이 : %d, %d\n\n", man1.age, man2.age);
}

void Ex3(void)
{
	struct person man3 = { "하늘",30 };		// 처음 배열 초기화 시에는 stfcpy 안써도 됨.
	printf("%s %d\n", man3.name, man3.age);
}
int main(void)
{
	Ex1();
	Ex2();
	Ex3();
}