#include <stdio.h>
int main() {
	double arr[11];
	int n, i;
	scanf("%d", &n);
	arr[0] = n;
	for(i = 0; i < 10; i++)
	{
		printf("%.1lf ", arr[i]);
		arr[i+1] = arr[i] + 0.1;
	}
	return 0;
}