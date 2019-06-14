#include <stdio.h>

typedef struct HealthInfo
{
	char ch[100];
	double a,b;
}hi;

void
main() {
	hi h;
	scanf("%s %lf %lf",h.ch,&h.a,&h.b);
	printf(h.b/h.a/h.a*10000>=25?"%s는 과체중입니다.":h.b/h.a/h.a*10000<18.5?"%s는 저체중입니다.":"%s는 정상입니다.",h.ch);
}
