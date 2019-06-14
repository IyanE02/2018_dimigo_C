#include <stdio.h>

void
SC(char a[100], char b[100])
{
	for(int i=0;;i++)
	{
		if((a[i] == NULL && b[i] != NULL) || (a[i] != NULL && b[i] == NULL))
		{
			printf("다르다");
			return;
		}
		if(a[i] == NULL && b[i] == NULL)
		{
			printf("같다");
			return;
		}
	}
}

void
main()
{
	char a[100], b[100];
	scanf("%s %s", a, b);
	SC(a, b);
}