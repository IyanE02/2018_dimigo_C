#include <stdio.h>
int main() {
	int a;
	double money=1000000;
	scanf("%d", &a);
	int i=0;
	while(i!=a)
	{
		money += money / 20;
		i++;
	}
	
	printf("%.0lf원", money);
	
	return 0;
}
