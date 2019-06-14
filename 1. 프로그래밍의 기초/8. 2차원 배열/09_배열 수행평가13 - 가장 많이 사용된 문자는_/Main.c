 #include <stdio.h>
int main() {
	char str[35];
	int arr[27]={0,},i,n=26;
	arr[26] = -1;
	scanf("%s", str);
	for(i=0;;i++)
	{
		if(str[i] == NULL) break;
		arr[str[i]-'a']++;
	}
	for(i=0;i<26;i++)
	{
		if(arr[i] > arr[n]) n = i;
	}
	printf("%c", 'a'+n);
	return 0;
}
