#include <stdio.h>
int main()
{
	int list[10], find, i, where=-1;
	for(i=0;i<10;i++)
		scanf("%d", &list[i]);
		
	scanf("%d", &find);
	for(i=0;i<10;i++)
		if(list[i] == find) where = i;
	
	printf("%d", where);
	return 0;
}
