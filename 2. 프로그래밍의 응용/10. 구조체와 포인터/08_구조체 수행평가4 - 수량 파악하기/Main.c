#include <stdio.h>
#include <string.h>

typedef struct ShoppingList
{
	char ch[100],ch2[100];
	int a;
}sl;

void
main() {
	sl s[10];
	int i,n,c;
	char tmp[100];
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%s %s %d",s[i].ch,s[i].ch2,&s[i].a);
	scanf("%s",tmp);
	for (i=0;i<n;i++)
		if (!strcmp(tmp,s[i].ch2))
			c+=s[i].a;
	printf("%d",c);
}
