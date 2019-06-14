#include <stdio.h>
int main()
{
	int h, m;
	scanf("%d:%d", &h, &m);
	
	m -= 35;
	
	if(m < 0)
	{
		m+=60;
		h--;
	}
	
	if(h<0)
		h+=24;
	
	printf("%02d:%02d", h, m);
	
	return 0;
}
