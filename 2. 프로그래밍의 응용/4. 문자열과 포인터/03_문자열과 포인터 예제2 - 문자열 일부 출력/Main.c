#include <stdio.h>
int main() {
	char arr[101],*p,ch;
	scanf("%s",arr);
	scanf(" %c",&ch);
	p=arr;
	while(*p)
	{
		if(*p==ch)
			break;
		p++;
	}
	if(*p)
		printf("%s",p);
	else
		printf("해당 문자 없음");
	return 0;
}
