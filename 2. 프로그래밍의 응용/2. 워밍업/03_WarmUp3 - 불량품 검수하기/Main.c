#include <stdio.h>
int main() {
	int i,j=0;
	scanf("%d",&i);
	do
	{
		j+=i%10;
		i/=10;
	}while(i);
	printf("%s",j%7 == 4?"Bad":"Good");
	return 0;
}
