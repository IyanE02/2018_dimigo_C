#include <stdio.h>

void print(char *str, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%c", str[i]);
	}
}

void string(char *str)
{
	char strs[1000];
	int len = 0, i, n = 0;
	for (i = 0; i < 1000; i++)
	{
		if (str[i] != NULL) len++;
		else break;
	}

	for (i = len - 1; i >= 0; i--)
	{
		strs[n] = str[i];
		n++;
	}

	print(strs, len);

	return;
}

int main()
{
	char str[1000] = { 0, };
	scanf("%s", str);
	char strs[1000];
	string(str);
	return 0;
}