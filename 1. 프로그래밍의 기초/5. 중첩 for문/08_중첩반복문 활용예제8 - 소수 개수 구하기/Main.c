#include <stdio.h>

int sosu(int a)
{
	int cnt = 0;
	for (int i = 2; i < a; i++)
		if (a % i == 0) cnt++;

	if (cnt == 0) return 1;
	return 0;
}

int main()
{
	int n, m = 0;
	scanf("%d", &n);
	for (int i = n - 1; i != 1; i--)
		if (sosu(i) == 1) m++;
	printf("%d", m);
	return 0;
}