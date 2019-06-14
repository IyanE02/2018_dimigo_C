#include <stdio.h>
#include <string.h>

typedef struct food
{
	char name[20];
	int price;
}food;

int fdp(food *a)
{
	int n;
	int sum=0;
	
	scanf("%d", &n);
	
	for(int k=0;k<n;k++)
	{
		char name[20];
		int num;
		
		scanf("%s %d", name, &num);
		
		for(int i=0;i<10;i++)
			if(strcmp(name, a[i].name) == 0)
				for(int j=0;j<num;j++)
					sum += a[i].price;
	}
	
	return sum;
}

int main()
{
	food n[10];
	
	for(int i=0;i<10;i++)
		scanf("%s %d", n[i].name, &n[i].price);
	printf("%d원", fdp(n));
	return 0;
}