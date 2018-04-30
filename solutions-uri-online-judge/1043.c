#include <stdio.h>

int isTriangle(float *s)
{
	int v=0;

	if( (s[0] + s[1]) > s[2])	v++;
	
	if( (s[0] + s[2]) > s[1])	v++;
	
	if( (s[1] + s[2]) > s[0])	v++;
	
	return v;
}

int main()
{
	float s[3];
	int i;

	for(i=0; i < 3; i++)	scanf("%f", &s[i]);

	if ( isTriangle(s) == 3)
		printf( "Perimetro = %.1f\n", (s[0] + s[1] + s[2]) );
	else
		printf( "Area = %.1f\n", ( (s[0] + s[1]) / 2 * s[2] ) );


	return 0;
}