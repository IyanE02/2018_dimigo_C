#include <stdio.h>
int main() {
	char ina[35], inb[35];
	int i, len;
	scanf("%s %s", ina, inb);
	for(i=0;i<35;i++)
	{
		if(ina[i] == NULL)
		{
			len = i+1;
			break;
		}
	}
	for(i=0;i<len;i++)
	{
		if(ina[i] != inb[i])
		{
			printf("다르다");
			return 0;
		}
	}
	printf("같다");
	return 0;
}
