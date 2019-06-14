#include <stdio.h>
int main() {
	char arr[3][100];
	char *p = arr;
	int i;
	for(i=0;i<3;i++)
		scanf("%s",p+100*i);
	scanf("%d",&i);
	printf("%c%c%c",*(p+i),*(p+100+i),*(p+200+--i));	
	return 0;
}
