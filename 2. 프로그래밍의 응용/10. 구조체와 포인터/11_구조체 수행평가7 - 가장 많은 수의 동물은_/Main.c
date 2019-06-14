#include <stdio.h>

typedef struct ZooInfo
{
	char ch[100],ch2[100];
	int a;
}zi;

void
main() {
	zi z[10];
	int i,n,max=0;
	char tmp[100];
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%s %d %s",z[i].ch,&z[i].a,z[i].ch2);
	for (i=1;i<n;i++)
		if(z[i].a>z[max].a)
			max=i;
	printf("%s %s",z[max].ch,z[max].ch2);
}
