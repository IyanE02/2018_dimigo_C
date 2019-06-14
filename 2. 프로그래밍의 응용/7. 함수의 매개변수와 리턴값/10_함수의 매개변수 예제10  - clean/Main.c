#include <stdio.h>

void print(char *str)
{
	for(int i=0;;i++)
	{
		if(str[i] != NULL)
		{
			if(str[i]>='a' && str[i] <='z')
				printf("%c", str[i]);
		}
		else if(str[i] == NULL)
			break;
	}
}

int main()
{
	char str[100];
	scanf("%s", str);
	print(str);
}
