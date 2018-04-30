#include <stdio.h>

int main(){
	int n,i=1;
	unsigned long long int num=1,num_q,num_t;

	scanf("%d",&n);

	for(; i <= (n * 2); i++)
	{	
		if(i%2 != 0)
		{
			num_q = num * num;
			num_t = num_q * num;
			printf("%llu %llu %llu\n", num, num_q, num_t);
		}
		else
		{
			printf("%llu %llu %llu\n", num, num_q+1, num_t+1);
			num++;			
		}
	}
	return 0;
}