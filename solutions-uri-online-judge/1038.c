#include <stdio.h>

int main()
{	
	int cod, quant;
	
	scanf("%d %d", &cod, &quant);

	switch(cod){

		case 1:
			printf("Total: R$ %.2lf\n", quant*4.00);	break;
		case 2:
			printf("Total: R$ %.2lf\n", quant*4.50);	break;
		case 3:
			printf("Total: R$ %.2lf\n", quant*5.00);	break;
		case 4:
			printf("Total: R$ %.2lf\n", quant*2.00);	break;
		case 5:
			printf("Total: R$ %.2lf\n", quant*1.50);	break;
	}


	return 0;
}