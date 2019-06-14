#include <stdio.h>
int main() {
	int n, i;
	char arr[50], temp;
	scanf("%s", arr);
	for(i=0;;i++)
		if(arr[i] == NULL) break;
	temp = arr[0];
	arr[0] = arr[i-1];
	arr[i-1] = temp;
	printf("%s", arr);
	return 0;
}
