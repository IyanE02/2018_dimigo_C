#include <stdio.h>

typedef struct PersonInfo{
	char n[100];
	int a,m,d;
}pi;

void
main() {
	pi p;
	int c;
	scanf("%s",p.n);
	scanf("%2d%2d%2d-%1d",&p.a,&p.m,&p.d,&c);
	p.a=c>2?2019-2000-p.a:2019-1900-p.a;
	printf("이름 : %s\n나이 : %d\n생년월일 : %02d월 %02d일",p.n,p.a,p.m,p.d);
}
