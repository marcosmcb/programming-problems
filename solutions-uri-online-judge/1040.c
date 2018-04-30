#include <stdio.h>
#define MAX 4

float calcGrades(float* g, int *q)
{	
	int i,weight=0;
	float k=0;

	for(i=0; i < MAX; i++)
	{
		k += ( g[i] * q[i] );
		weight += q[i];
	}

	return k/weight;
}

int main()
{
	float grades[MAX], exame;
	int quants[MAX] = {2,3,4,1}, i;

	for(i=0; i < MAX; i++)	
		scanf("%f",&grades[i]);

	float avg = calcGrades(grades, quants);

	printf("Media: %.1f\n", avg);
	if(avg >= 7)
		printf("Aluno aprovado.\n");
	else if ( avg < 5)
		printf("Aluno reprovado.\n");
	else
	{
		printf("Aluno em exame.\n");
		scanf("%f", &exame);
		printf("Nota do exame: %.1f\n", exame);

		if( (avg+exame)/2  >= 5 )	
			printf("Aluno aprovado.\n");
		else	
			printf("Aluno reprovado.\n");

		printf("Media final: %.1f\n",  (avg+exame)/2 );

	}

	return 0;
}