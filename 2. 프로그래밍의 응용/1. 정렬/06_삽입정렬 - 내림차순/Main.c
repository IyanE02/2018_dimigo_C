#include <stdio.h>

int main()
{
	int n, i, j, k, arr[100], imsi;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 1; i < n; i++) {
		for (j = 0; j < i; j++) {
			if (arr[j] < arr[i]) {
				imsi = arr[i];
				for (k = i; k > j; k--) {
					arr[k] = arr[k - 1];
				}
				arr[j] = imsi;
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}