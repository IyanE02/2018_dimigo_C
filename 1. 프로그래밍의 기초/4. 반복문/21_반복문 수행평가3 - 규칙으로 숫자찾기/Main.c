#include <stdio.h>
int main()
{
	int n, chk = 0, i, num = 1;
	scanf("%d", &n);
	for (i = 0; i<n-1; i++)
	{
		if (chk % 2 == 0)
		{
			num -= 3;
			chk++;
		}
		else
		{
			num += 5;
			chk++;
		}
	}
	printf("%d", num);
	return 0;
}