#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	
	if(a > 12 || a < 1)
	{
		printf("잘못 입력했습니다.");
		return 0;
	}
	
	if(a >= 3 && a <= 5)
		printf("봄!");
	if(a >= 6 && a <= 8)
		printf("여름!");
	if(a >= 9 && a <= 11)
		printf("가을!");
	if(a >= 12 || a <= 2)
		printf("겨울!");
	
	return 0;
}
