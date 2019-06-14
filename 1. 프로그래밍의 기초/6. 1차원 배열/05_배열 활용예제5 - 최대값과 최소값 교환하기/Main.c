#include <stdio.h>
int main()
{
	int arr[10], min = 9999999, max = -9999999, temp, i, wmin, wmax;
	for (i = 0; i < 10; i++)
		scanf("%d", &arr[i]);

	for (i = 0; i < 10; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			wmin = i;
		}
		if (arr[i] > max)
		{
			max = arr[i];
			wmax = i;
		}
	}

	temp = arr[wmax];
	arr[wmax] = arr[wmin];
	arr[wmin] = temp;

	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	return 0;
}
