#include <stdio.h>
int main()
{
	char str[20];
	int n = 0;
	scanf("%s", str);
	for (int i = 0;; i++)
	{
		if (str[i] != NULL)
			n++;
		else break;
	}
	printf("%d", n);
	return 0;
}