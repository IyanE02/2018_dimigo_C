#include <stdio.h>
#include <string.h>

typedef struct SmartFarm
{
	char ch[100];
	int a,b;
}sf;

int Cal (sf *s,char *ch)
{
	int i;
	for(i=0;i<5;i++)
		if(!strcmp(s[i].ch,ch))
			return s[i].a*s[i].b;
	return 0;
}


void
main() {
	sf s[5];
	int i;
	char tmp[100];
	for (i=0;i<5;i++)
		scanf("%s %d %d",s[i].ch,&s[i].a,&s[i].b);
	scanf("%s",tmp);
	printf("%d",Cal(s,tmp));
}
