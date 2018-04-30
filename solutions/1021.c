#include <stdio.h>
#define MAX 12

int main()
{
	double amount;

	double money[MAX] = {100, 50, 20, 10, 5, 2, 1, 0.5, 0.25, 0.1, 0.05, 0.01};
	int quant[MAX]={0},i=0;

	scanf("%lf", &amount);

	while(i < MAX)
	{
		while( amount >= money[i] )
		{
			quant[i]++;
			amount -= money[i];
		}
		i++;
	}

	printf("NOTAS:\n");
	for(i=0; i < (MAX/2); i++)	printf("%d nota(s) de R$ %.2lf\n", quant[i], money[i]);

	printf("MOEDAS:\n");
	for(i=6; i < MAX; i++)	printf("%d moeda(s) de R$ %.2lf\n", quant[i], money[i]);
}