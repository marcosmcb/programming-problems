#include <stdio.h>

int main(){
	int dias,anos,meses;

	scanf("%d",&dias);

	if( (dias/365) >= 0 ){
		anos = dias/365;
		dias -= (anos*365);
		printf("%d ano(s)\n", anos);
	}
	
	if( (dias/30) >= 0 ){
		meses = dias/30;
		dias -= (meses*30);
		printf("%d mes(es)\n", meses);
	}

	printf("%d dia(s)\n", dias);
}