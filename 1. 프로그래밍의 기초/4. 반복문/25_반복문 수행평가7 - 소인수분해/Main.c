#include <stdio.h>
int main() {
	int a2=0, a3=0, a5=0, a, imsi;
	scanf("%d", &a);
	
	imsi = a;
	for(;;)
	{
		if(imsi % 2 == 0)
		{
			a2++;
		}
		else
			break;
		imsi = imsi / 2;
	}
	
	imsi = a;
	for(;;)
	{
		if(imsi % 3 == 0)
		{
			a3++;
		}
		else
			break;
		imsi = imsi / 3;
	}
	
	imsi = a;
	for(;;)
	{
		if(imsi % 5 == 0)
		{
			a5++;
		}
		else
			break;
		imsi = imsi / 5;
	}
	
	printf("%d %d %d", a2, a3, a5);
	return 0;
}
