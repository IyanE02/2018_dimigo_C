#include <stdio.h>
int main() {
	char ch[101],*p;
	int i=0;
	p=ch;
	scanf("%s",ch);
	while(*p++)
		i++;
	printf("%d",i);
	return 0;
}
