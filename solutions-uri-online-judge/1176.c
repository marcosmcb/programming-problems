#include <stdio.h>

unsigned long long int vec[61];

int main() 
{
	int t,i,j,lastN=1,n;

	vec[0]=0;
	vec[1]=1;

	scanf("%d", &t);
	for(i=0; i < t; i++)
	{	
		scanf("%d",&n);
		if( n == 0 )
		{
			printf("Fib(%d) = %llu\n", n, vec[n]);
		}
		else if( n == 1 )
		{
			printf("Fib(%d) = %llu\n", n, vec[n]);
		}
		else
		{
			if(n > lastN)
			{
				for(j=2; j <= n; j++)
				{
					vec[j] = vec[j-2] + vec[j-1];
				}
				lastN = n;
				printf("Fib(%d) = %llu\n", n, vec[n]);
			}
			else
			{
				printf("Fib(%d) = %llu\n", n, vec[n]);
			}
		}

	}

    return 0;
}