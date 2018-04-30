#include <stdio.h>

int main()
{
	double vec[6];
	int sum=0,i;

	for(i=0; i < 6; i++)
	{
		do{
			scanf("%lf",&vec[i]);
		}while(vec[i] == 0);

		if(vec[i] > 0)	sum++;
	}

	printf("%d valores positivos\n", sum);

	return 0;
}