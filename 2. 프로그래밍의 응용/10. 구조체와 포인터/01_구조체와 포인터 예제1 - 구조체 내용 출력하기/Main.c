#include <stdio.h>

typedef struct Person
{
	char name[20];
	int age;
	int hight;
}person;

void print(person k)
{
	printf("이름 : %s\n나이 : %d\n키 : %d", k.name, k.age, k.hight);
}

int main()
{
	person a;
	scanf("%s %d %d", a.name, &a.age, &a.hight);
	print(a);
	return 0;
}