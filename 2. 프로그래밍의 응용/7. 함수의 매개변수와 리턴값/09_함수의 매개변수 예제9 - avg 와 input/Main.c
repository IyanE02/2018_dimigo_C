#include <stdio.h>

void input(int *arr)
{
	for(int i=0;i<16;i++)
		scanf("%d", arr++);
}

double avg(int *arr)
{
	double a=0;
	for(int i=0;i<16;i++)
		a += *arr++;
	return a / 16.0;
}

int main()
{
	int arr[4][4];
	input(arr);
	printf("%.2lf", avg(arr));
	return 0;
}
