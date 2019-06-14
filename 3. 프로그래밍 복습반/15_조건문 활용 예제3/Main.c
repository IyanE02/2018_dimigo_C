#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	a /= 10;
	if(a==0)
		printf("어린이");
	if(a==1)
		printf("청소년");
	if(a==2||a==3)
		printf("청년");
	if(a==4||a==5)
		printf("장년");
	if(a>=6)
		printf("노년");
	return 0;
}
