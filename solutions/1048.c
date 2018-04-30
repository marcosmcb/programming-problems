#include <stdio.h>


void myPrint(float aumento, float sal)
{
	printf("Novo salario: %.2f\n",  (aumento * sal) + sal );
	printf("Reajuste ganho: %.2f\n",(aumento * sal) );
	printf("Em percentual: %.0f %c\n",aumento*100,'%');
}


int main()
{
	float sal;

	scanf("%f",&sal);

	if (sal <= 400.00)	myPrint(0.15,sal);

	else if ( sal <= 800.00)	myPrint(0.12,sal);

	else if ( sal <= 1200.00) myPrint(0.10,sal);

	else if (sal <= 2000.00)	myPrint(0.07,sal);

	else	myPrint(0.04,sal);

	return 0;
}