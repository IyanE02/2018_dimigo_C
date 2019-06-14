#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void substring(char *str, int n)
{
	for (int i = n;; i++)
	{
		if (str[i] != NULL)
			printf("%c", str[i]);
		else break;
	}
}

int main()
{
	int n;
	char str[100];
	scanf("%s %d", str, &n);
	substring(str, n);
	return 0;
}