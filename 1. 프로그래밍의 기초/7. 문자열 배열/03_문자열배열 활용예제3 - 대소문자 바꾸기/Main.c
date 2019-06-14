#include <stdio.h>
int main(void)
{
	char str[100];
	int i;

	scanf("%s", str);
	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] = str[i] - 'a' + 'A';
		else if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] = str[i] - 'A' + 'a';
	}
	printf("%s", str);
	return 0;
}