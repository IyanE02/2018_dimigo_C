#include <stdio.h>

int result(int n1, int n2)
{
	if (n2 == 0)
		return n1;
	return result(n2, n1%n2);
}

int main(void)
{
	int num1, num2;
	scanf("%d", &num1);
	scanf("%d", &num2);
	if (num1 < num2)
		printf("%d", result(num2, num1));
	else
		printf("%d", result(num1, num2));
	return 0;
}

