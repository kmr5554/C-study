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
	strcpy(man1.name, "ȫ�浿");	// �迭�� ���ڿ� �����Ҷ� strcpy�� ���� (�Ǵ� �ٸ� ���ڿ� ���� ���� �� for������ ���� �������) 
	man1.age = 23;

	printf("�̸� : "), scanf("%s", &man2.name);
	printf("���� : "), scanf("%d", &man2.age);

	printf("�̸� : %s, %s\n", man1.name, man2.name);
	printf("���� : %d, %d\n\n", man1.age, man2.age);
}

void Ex3(void)
{
	struct person man3 = { "�ϴ�",30 };		// ó�� �迭 �ʱ�ȭ �ÿ��� stfcpy �Ƚᵵ ��.
	printf("%s %d\n", man3.name, man3.age);
}
int main(void)
{
	Ex1();
	Ex2();
	Ex3();
}