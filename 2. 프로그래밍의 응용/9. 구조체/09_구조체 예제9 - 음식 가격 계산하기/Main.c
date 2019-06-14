#include <stdio.h>
#include <string.h>

struct food
{
	char menu[100];
	int price;
};

int main()
{
	struct food n[100];
	int in, i, j;
	char begeo[100];
	
	scanf("%d", &in);
	for(i=0;i<in;i++)
	{
		scanf("%s %d", n[i].menu, &n[i].price);
	}
	
	scanf("%s", begeo);
	
	for(i=0;i<in;i++)
	{
		if(strcmp(n[i].menu, begeo) == 0)
		{
			printf("%d원", n[i].price);
			return 0;
		}	
	}
	return 0;
}