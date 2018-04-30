#include <stdio.h>

int main()
{
	int h,d;
	double c;

	scanf("%d%d", &h, &d);

	c = (double) (h*d)/12;

	printf("%.3f\n",c);

	return 0;
}