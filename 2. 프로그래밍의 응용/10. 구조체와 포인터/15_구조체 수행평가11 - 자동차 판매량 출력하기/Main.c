#include <stdio.h>
#include <string.h>

typedef struct CarSellingInfo
{
	char ch[100],ch2[100];
	int a;
}C;

int GetTotalCount(C *c,char *ch)
{
	int i,a=0;
	for(i=0;i<5;i++)
		if(!strcmp(c[i].ch2,ch))
			a+=c[i].a;
	return a;
}


int main() {
	C c[5];
	int i;
	char tmp[100];
	for (i=0;i<5;i++)
		scanf("%s %s %d",c[i].ch,c[i].ch2,&c[i].a);
	scanf ("%s",tmp);
	printf("%d",GetTotalCount(&c,tmp));
	return 0;
}
