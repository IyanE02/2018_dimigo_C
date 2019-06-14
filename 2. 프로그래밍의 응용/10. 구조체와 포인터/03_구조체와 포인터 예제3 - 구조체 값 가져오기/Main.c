#include <stdio.h>
#include <string.h>

typedef struct food
{
	char name[20];
	int price;
}food;

int fdp(food *a)
{
	char name[20];
	
	scanf("%s", name);
	
	for(int i=0;i<5;i++)
		if(strcmp(name, a[i].name) == 0)
			return a[i].price;
	
	return 0;
}

int main()
{
	food n[5];
	
	for(int i=0;i<5;i++)
		scanf("%s %d", n[i].name, &n[i].price);
	printf("%d", fdp(n));
	return 0;
}