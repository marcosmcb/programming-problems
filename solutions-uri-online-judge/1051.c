#include <stdio.h>


void myPrint(int aumento, float sal)
{
	if(aumento == 8)			printf("R$ %.2f\n", (sal - 2000) * 0.08);
	
	else if(aumento == 18)	printf("R$ %.2f\n", ((sal - 3000) * 0.18) + ( 1000 * 0.08) );
	
	else						printf("R$ %.2f\n", ((sal - 4500) * 0.28) + (1500 * 0.18) + ( 1000 * 0.08) );
}


int main()
{
	float sal;

	scanf("%f",&sal);

	if (sal <= 2000.00)			printf("Isento\n");

	else if ( sal <= 3000.00)	myPrint(8,sal);

	else if ( sal <= 4500.00) 	myPrint(18,sal);

	else						myPrint(28,sal);

	return 0;
}