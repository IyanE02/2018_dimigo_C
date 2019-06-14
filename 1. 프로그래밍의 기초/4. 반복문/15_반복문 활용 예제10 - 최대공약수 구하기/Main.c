#include <stdio.h>
int main()
{
	int a, b, r, i = 0;
	scanf("%d %d", &a, &b);
	for (i=1;;i++)
	{
		r = a - b * i;
		if (r < b && r != 0)
		{
			a = b;
			b = r;
			i = 0;
		}
		else if (r == 0)
		{
			printf("%d", b);
			break;
		}
	}
	return 0;
}
