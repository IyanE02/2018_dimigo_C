#include <stdio.h>

void print_hello(int m)
{
	for(int i=0;i<m;i++)
		printf("Hello\n");
}

int main() {
	int n;
	scanf("%d", &n);
	print_hello(n);
	return 0;
}