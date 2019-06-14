#include <stdio.h>
void main()
{
	int i, j, n;
	scanf("%d", &n);
    for(i=n/2+1; i>=1; i--) {
        for(j=n/2+1-i; j>=1; j--) {
            printf(" ");
        }
        for(j=i*2-1; j>=1; j--) {
            printf("*");
        }
        printf("\n");
    }
 
    for(i=1+1; i<=n/2+1; i++) {
        for(j=1; j<=n/2+1-i; j++) {
            printf(" ");
        }
        for(j=1; j<=i*2-1; j++) {
            printf("*");
        }
        printf("\n");
    }
 return 0;
}