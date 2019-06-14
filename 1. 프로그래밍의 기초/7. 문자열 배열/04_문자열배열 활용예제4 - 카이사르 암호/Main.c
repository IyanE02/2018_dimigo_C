#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char str[2000];
	int n, i;
	scanf("%s %d", str, &n);
	for (i = 0;; i++)
	{
		if (str[i] == NULL)
			break;

		str[i] += n;

		if (str[i] > 90 && str[i] < 97)
			str[i] -= 26;

		if (str[i] > 122)
			str[i] -= 26;

		printf("%c", str[i]);
	}
	return 0;
}