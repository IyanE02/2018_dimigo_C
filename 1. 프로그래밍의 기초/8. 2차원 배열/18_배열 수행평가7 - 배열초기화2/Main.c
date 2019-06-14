#include <stdio.h>
int main() {
	char input, str[10];
	scanf("%c", &input);
	str[0] = input;
	for(int i=0; i<10;i++)
	{
		printf("%c ", str[i]);
		str[i+1] = str[i] + 1;
		if(str[i] == 'Z') str[i+1] = 'A';
	}
	return 0;
}
