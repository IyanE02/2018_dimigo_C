#include <stdio.h>
#include <string.h>

typedef struct Triangle{
	char color[100];
	int a,b,size;
}T;

int SearchTriangle(T *t, char *ch, int i)
{
	int a=5, c=0;
	while(a--)
		if(!strcmp(ch,t[a].color))
			if(t[a].size>=i)
				c++;
	return c;
}

int main() {
	int a=5;
	int c=0,i;
	char ch[100];
	T t[6];
	while(a--)
	{
		scanf("%s %d %d",t[a].color,&t[a].a,&t[a].b);
		t[a].size = t[a].a*t[a].b/2;
	}
	scanf("%s %d",ch,&i);
	printf ("%d",SearchTriangle(&t,ch,i));
	return 0;
}
