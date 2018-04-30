#include <stdio.h>

int main()
{
	int vec[100], i, idxMax=0;

	for(i=0; i < 100; i++)
	{
		scanf("%d",&vec[i]);
		if(i>0)
			if(vec[i] > vec[idxMax])
				idxMax = i;
	}

	printf("%d\n%d\n", vec[idxMax], idxMax+1);

}