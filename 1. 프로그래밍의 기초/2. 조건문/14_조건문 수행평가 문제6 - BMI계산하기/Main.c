#include <stdio.h>
int main() {
	double a, b, c;
	
	scanf("%lf %lf", &a, &b);
	
	c = b / ((a / 100) * (a / 100));
	
	if(c<=18.5)
		printf("저체중");
	else if(c>18.5 && c<25)
		printf("정상");
	else if(c>=25 && c < 30)
		printf("과체중");
	else if(c>=30)
		printf("비만");
	
	return 0;
}
