#include <stdio.h>
#include <string.h>
typedef struct MobileInfo{
	char name[100];
	char brand[100];
	int num;
}mi;

void
main() {
	mi p[11];
	int n,i;
	int sam = 0, lg = 0, apple = 0;
	scanf("%d",&n);
	i =n;
	while(n--)
		scanf("%s %s %d",p[n].name,p[n].brand,&p[n].num);
	while(i--)
	{
		if(!strcmp(p[i].brand,"삼성"))
			sam++;
		if(!strcmp(p[i].brand,"LG"))
			lg++;
		if(!strcmp(p[i].brand,"애플"))
			apple++;
	}
	printf("삼성 : %d\nLG : %d\n애플 : %d",sam,lg,apple);
}
