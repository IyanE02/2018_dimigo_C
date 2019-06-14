#include <stdio.h>
int main()
{
	int a, b, min=0;
	scanf("%d %d", &a, &b);
	for(int i=a; ; i++)
	{
		if(i % a == 0 && i % b == 0)
		{
			min = i;
			break;
		}
	}
	printf("%d", min);
	return 0;
}