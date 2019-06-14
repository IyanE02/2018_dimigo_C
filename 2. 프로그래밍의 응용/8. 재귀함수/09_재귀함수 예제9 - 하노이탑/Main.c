#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int num = 0;

void hanoi(int n, int s, int e)
{
	if (n <= 0)return;
	hanoi(n - 1, s, 6 - s - e);
	printf("%d번 원반 %c에서 %c로 이동\n", n, s + 64, e + 64);
	num++;
	hanoi(n - 1, 6 - s - e, e);
}

int main()
{
	int n;
	scanf("%d", &n);

	hanoi(n, 1, 3);

	printf("%d", num);

	return 0;
}