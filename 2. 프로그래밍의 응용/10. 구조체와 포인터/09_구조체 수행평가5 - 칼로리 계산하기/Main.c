#include <stdio.h>
#include <string.h>

typedef struct FoodInfo
{
	char name[30];
	int cal;
	double calper1;
}food;

int GetCal(food *fd)
{
	char name[30];
	int gram;
	
	scanf("%s %d", name, &gram);
	
	for(int i=0;i<5;i++)
	{
		if(strcmp(name, fd[i].name) == 0)
		{
			return gram * fd[i].calper1;
		}
	}
	return -1;
}

int main()
{
	food f[5];
	for(int i=0;i<5;i++)
	{
		scanf("%s %d", f[i].name, &f[i].cal);
		f[i].calper1 = (double)f[i].cal / 10.0;
	}
	
	if(GetCal(f) == -1) printf("알수없음");
	else printf("%d", GetCal(f));
	
	return 0;
}