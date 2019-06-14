#include <stdio.h>

int GCD(int a, int b)
{
	int r, tmp;

	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}

	for (int i = 1;; i++)
	{
		r = a - b * i;
		if (r < b && r != 0)
		{
			a = b;
			b = r;
			i = 0;
		}
		else if (r == 0)
			break;
	}
	return b;
}

int LCD(int a, int b)
{
	int min = 0, tmp;

	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}

	for (int i = a; ; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			min = i;
			break;
		}
	}
	return min;
}

int main()
{
	int n;
	int input[100][2], output[100][2];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &input[i][0], &input[i][1]);
		output[i][0] = GCD(input[i][0], input[i][1]);
		output[i][1] = LCD(input[i][0], input[i][1]);
	}
	for (int i = 0; i < n; i++)
		printf("%d %d\n", output[i][0], output[i][1]);

	return 0;
}
