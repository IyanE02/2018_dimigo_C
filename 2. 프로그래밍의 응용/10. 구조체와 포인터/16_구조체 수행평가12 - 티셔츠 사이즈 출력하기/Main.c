#include <stdio.h>

typedef struct T_Shirt
{
	int a,b;
	char ch;
}T;

int main() {
	T t;
	scanf("%d%c%3d",&t.a,&t.ch,&t.b);
	printf("모델번호 : %d\n색상 : %s\n사이즈 : %d",t.a,t.ch=='R'?"Red":t.ch=='B'?"Black":"White",t.b);
	return 0;
}