#include <stdio.h>
int main() {
	int n, i, j;
	char arr[50];
	scanf("%s %d", arr, &n);
	for (i = 0;; i++)
	{
		if (arr[i] == NULL) break;
		for (j = 0; j<n; j++) printf("%c", arr[i]);
	}
	return 0;
}
