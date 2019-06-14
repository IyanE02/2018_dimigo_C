#include <stdio.h>
int main()
{
	int a, b;
	char c;
	scanf("%d %d %c", &a, &b, &c);

	if ((a >= 12 || b >= 130) || (c == 'y'))
		printf("놀이기구에 탑승하세요.\n");
	else
		printf("놀이기구에 탑승할 수 없습니다.");

	return 0;
}