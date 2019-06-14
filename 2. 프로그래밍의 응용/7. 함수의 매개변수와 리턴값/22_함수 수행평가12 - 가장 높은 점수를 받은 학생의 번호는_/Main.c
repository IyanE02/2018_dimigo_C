#include <stdio.h>

void
MA(int a, int b[100][3])
{
	int n;
	double m = -1;
	for(int i=0;i<a;i++)
	{
		if(m < ((double)b[i][0] + (double)b[i][1] + (double)b[i][2])/3)
		{
			m = ((double)b[i][0] + (double)b[i][1] + (double)b[i][2])/3;
			n = i;
		}
	}
	printf("%d", n+1);
}

void
main()
{
	int a;
	int b[100][3];
	
	scanf("%d", &a);
	for(int i=0;i<a;i++)
		for(int j=0;j<3;j++)
			scanf("%d", &b[i][j]);
	
	MA(a, b);
}