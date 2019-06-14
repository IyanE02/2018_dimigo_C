#include <stdio.h>

struct st
{
	int num;
	int a;
	int b;
	int c;
	double avg;
};

int main()
{
	int a, i;
	double alavg=0;
	scanf("%d", &a);
	struct st n[a];
	for(i=0;i<a;i++)
	{
		scanf("%d %d %d %d", &n[i].num, &n[i].a, &n[i].b, &n[i].c);
		n[i].avg = ((double)n[i].a + (double)n[i].b + (double)n[i].c) / 3;
		alavg += n[i].avg;
	}
	
	alavg /= a;
	
	printf("%.2lf\n", alavg);
	for(i=0;i<a;i++)
		if(n[i].avg >= alavg)
			printf("%d\n",n[i].num);

	return 0;
}