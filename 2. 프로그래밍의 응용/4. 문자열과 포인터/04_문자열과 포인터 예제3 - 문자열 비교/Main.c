#include <stdio.h>
int main() {
	char arr1[101],arr2[101];
	char *p1 = arr1,*p2 = arr2;
	gets(arr1);
	gets(arr2);
	while(*p1)
	{
		if(*p1 != *p2)
			break;
		*p1++;
		*p2++;
	}
	if(*p1||*p2)
		printf("다르다");
	else
		printf("같다");
	return 0;
}
