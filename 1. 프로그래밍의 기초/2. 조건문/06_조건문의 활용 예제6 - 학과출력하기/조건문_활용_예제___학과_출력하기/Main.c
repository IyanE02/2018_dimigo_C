#include <stdio.h>
int main()
{
	int in, gr, cl;

	scanf("%d", &in);

	gr = in / 1000;
	cl = in / 100 - gr * 10;



	if (gr > 3 || gr < 1) { printf("디미고 학생이 아닙니다."); return 0; }
	if (cl > 6 || cl < 1) { printf("디미고 학생이 아닙니다."); return 0; }

	if (cl == 1) printf("eb");
	else if (cl == 2) printf("dc");
	else if (cl == 3 || cl == 4) printf("wp");
	else if (cl == 5 || cl == 6) printf("hd");

	return 0;
}