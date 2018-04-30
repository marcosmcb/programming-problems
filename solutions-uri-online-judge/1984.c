#include <stdio.h>

int main()
{
	long long int num;

	scanf("%lld", &num);

	while(num != 0)
	{
		printf("%d",num%10);
		num /= 10;
	}

	printf("\n");
	return 0;
}