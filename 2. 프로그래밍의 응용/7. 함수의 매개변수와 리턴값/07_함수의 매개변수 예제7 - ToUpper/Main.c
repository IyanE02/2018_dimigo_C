#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void toupper(char *a)
{
	if (*a >= 'a' && *a <= 'z')
		*a -= 32;
}

int main()
{
	int n;
	char str[100][100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", str[i]);
		for (int j = 0; str[i][j] != NULL; j++)
			toupper(&str[i][j]);
	}
	for (int i = 0; i < n; i++)
		printf("%s\n", str[i]);
	return 0;
}