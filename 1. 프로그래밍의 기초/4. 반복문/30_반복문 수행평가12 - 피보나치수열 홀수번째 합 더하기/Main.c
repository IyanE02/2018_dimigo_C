#include <stdio.h>
int main() {
	int a, i, sum=0, pibo[10000]={1, 2,};
	scanf("%d", &a);
	for(i=2;i<10000;i++)
	{
		pibo[i] = pibo[i-2] + pibo[i-1];
	}
	for(i=0;;i++)
	{
		if(pibo[i] >= a)
			break;
		if(i%2==0)
			sum += pibo[i];
	}
	printf("%d", sum);
	return 0;
}
