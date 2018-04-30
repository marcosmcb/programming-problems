#include <stdio.h>

int sumOdd(int x, int y)
{
	int i, sum=0;

	if (x > y)
	{
		int temp = x;
		x = y;
		y = temp;
	}

	for(i=x+1; i < y; i++)
		if( (i%2) == 1)
			sum += i;

	return sum;
}

int main()
{
	int N, i, X, Y;

	scanf("%d",&N);

	for(i=0; i < N; i++)
	{
		scanf("%d %d", &X, &Y);
		printf("%d\n", sumOdd(X,Y));
	}

	return 0;
}