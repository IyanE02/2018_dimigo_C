#include <stdio.h>
int main() {
	int in, a, b, c, d, cnt=0;
	scanf("%d", &in);
	a = in/1000;
	b = in/100 - a*10;
	c = in/10 -a*100 -b*10;
	d = in -a*1000 -b*100 -c*10;
	if(a == 1) cnt++;
	if(b == 1) cnt++;
	if(c == 1) cnt++;
	if(d == 1) cnt++;
	
	if(cnt == 1) printf("도");
	if(cnt == 2) printf("게");
	if(cnt == 3) printf("걸");
	if(cnt == 4) printf("윷");
	if(cnt == 0) printf("모");
	
	return 0;
}
