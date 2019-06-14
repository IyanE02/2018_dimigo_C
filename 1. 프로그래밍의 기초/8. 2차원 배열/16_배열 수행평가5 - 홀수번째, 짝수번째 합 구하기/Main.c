#include <stdio.h>
int main() {
	int n, arr[30], cnt[2]={0,};
	scanf("%d", &n);
	for(int i=0; i<n;i++)
		scanf("%d", &arr[i]);
	for(int i=0;i<n;i++)
		cnt[i%2] += arr[i];
	printf("%d %d", cnt[0], cnt[1]);
	return 0;
}
