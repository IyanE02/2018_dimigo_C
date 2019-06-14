#include <stdio.h>
int main() {
	int i, a;
	scanf("%d", &a);
	i = a;
	while(i!=0)
	{
		if(a%i == 0)
			printf("%d ", a / i);
		i--;
	}
	return 0;
}
