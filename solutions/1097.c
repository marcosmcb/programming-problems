#include <stdio.h>

int main()
{
	int i,j=4;

	for(i=0; i < 10; i++)
		if( (i%2) == 1)
		{
			printf("I=%d J=%d\n", i, j+3);
			printf("I=%d J=%d\n", i, j+2);
			printf("I=%d J=%d\n", i, j+1);
			j+=2;
		}
		
	return 0;
}