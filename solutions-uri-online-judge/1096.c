#include <stdio.h>

int main()
{
	int i;

	for(i=0; i < 10; i++)
		if( (i%2) == 1)
		{
			printf("I=%d J=7\n", i);
			printf("I=%d J=6\n", i);
			printf("I=%d J=5\n", i);
		}
}