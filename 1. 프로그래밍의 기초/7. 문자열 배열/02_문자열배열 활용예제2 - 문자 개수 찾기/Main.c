#include <stdio.h>
int main()
{
	char str[2000], n;
	int cnt = 0;
	scanf("%s %c", str, &n);
	for (int i = 0;; i++)
	{
		if (str[i] == n)
			cnt++;
		if (str[i] == NULL)
			break;
	}
	printf("%d", cnt);
	return 0;
}