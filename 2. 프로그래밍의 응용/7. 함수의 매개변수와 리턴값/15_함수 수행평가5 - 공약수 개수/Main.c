#include <stdio.h>
 
void
cass(int x, int y)
{
    int i, j, cnt = 0;
    for(i=0; i<x; i++)
		{
        if(x % (i+1) == 0 && y % (i+1) == 0)
				{
            cnt++;
        }
    }
  	printf("%d", cnt);
}
 
void
main()
{
    int k, cbs, cas, a, b, i;
 
    scanf("%d %d", &a, &b);
 
    cas = a;
 
    cass(a, b);
}