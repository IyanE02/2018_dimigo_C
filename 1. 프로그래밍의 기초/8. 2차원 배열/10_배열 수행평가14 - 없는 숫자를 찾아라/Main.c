#include <stdio.h>
int main() {
	int cnt[10] = {0,}, arr[10], i, n = 0;
	for(i=0;i<10;i++)
		scanf("%d", &arr[i]);
	for(i=0;i<10;i++)
		cnt[arr[i]]++;
	for(i=0;i<10;i++)
		if(cnt[i] == 0) { printf("%d ", i); n++; }
	if(n == 0) printf("NULL");
	return 0;
}
