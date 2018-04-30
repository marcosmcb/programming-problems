#include <stdio.h>

int main()
{
	float i=0;
	int j;
	while(i < 2)
	{
		if( (i == 0) || (i == 1) || (i == 2) )
		{
			j = (long) i;
			printf("I=%d J=%d\n", j, 1+j);
			printf("I=%d J=%d\n", j, 2+j);
			printf("I=%d J=%d\n", j, 3+j);	
		}
		else
		{
			printf("I=%.1f J=%.1f\n", i, 1+i);
			printf("I=%.1f J=%.1f\n", i, 2+i);
			printf("I=%.1f J=%.1f\n", i, 3+i);	
		}
		i += 0.2;
	}
	j = (long) i;
	printf("I=%d J=%d\n", j, 1+j);
	printf("I=%d J=%d\n", j, 2+j);
	printf("I=%d J=%d\n", j, 3+j);	

}