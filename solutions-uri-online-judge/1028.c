#include <stdio.h>
#include <math.h>

int euclides(int f1, int f2)
{
	int r1=1;

	while(r1 != 0)
	{
		r1 = f1 % f2;
		f1 = f2;
		f2 = r1;
		
	}
	return f1;
}

int main()
{
	int f1,f2,n,i, divisor, j;

	scanf("%d", &n);


	for(i=0; i < n; i++)
	{
		scanf("%d%d",&f1,&f2);

		if(f1 > f2)
		{
			int temp = f2;
			f2 = f1;
			f1 = temp;
		}

		divisor = euclides(f2,f1%f2);

		printf("%d\n", divisor);
	}

	return 0;
}