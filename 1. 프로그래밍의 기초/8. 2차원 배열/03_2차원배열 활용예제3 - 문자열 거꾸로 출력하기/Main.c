#include <stdio.h>
int main() {
	char input[5][100];
	int i;
	for(i=0;i<5;i++)
		scanf("%s", input[i]);
	for(i=4;i>=0;i--)
		printf("%s ", input[i]);
	return 0;
}
