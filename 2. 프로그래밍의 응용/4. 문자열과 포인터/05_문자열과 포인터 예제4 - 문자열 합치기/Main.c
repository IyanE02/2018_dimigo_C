#include <stdio.h>
int main() {
	char arr1[102],arr2[51];
	char *p1 = arr1,*p2 = arr2;
	gets(arr1);
	gets(arr2);
	while(*++p1);
	while(*p2)
		*p1++=*p2++;
	*p1=NULL;
	printf("%s",arr1);
	return 0;
}
