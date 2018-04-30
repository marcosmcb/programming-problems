#include <stdio.h>

int main()
{
	int test, password=2002;

	while(true)
	{
		scanf("%d",&test);
		if(test==password)	
		{
			printf("Acesso Permitido\n");
			break;
		}
		else printf("Senha Invalida\n");
	}

	return 0;
}