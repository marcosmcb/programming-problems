#include <stdio.h>

int main(){
	
	int note;
	int n100, n50, n20, n10, n5, n2, n1;

	scanf("%d", &note);
	printf("%d\n", note);
	while(note > 0){

		if( (note/100) != 0){

			n100 = note / 100;
			note -= (n100*100);
			printf("%d nota(s) de R$ 100,00\n", n100);

		}else{
			printf("%d nota(s) de R$ 100,00\n", 0);
		}

		if( (note/50) != 0){

			n50 = note / 50;
			note -= (n50*50);
			printf("%d nota(s) de R$ 50,00\n", n50);
		}else{
			printf("%d nota(s) de R$ 50,00\n", 0);
		}

		if( (note/20) != 0){

			n20 = note / 20;
			note -= (n20*20);
			printf("%d nota(s) de R$ 20,00\n", n20);
		}else{
			printf("%d nota(s) de R$ 20,00\n", 0);
		}

		if( (note/10) != 0){

			n10 = note / 10;
			note -= (n10*10);
			printf("%d nota(s) de R$ 10,00\n", n10);
		}else{
			printf("%d nota(s) de R$ 10,00\n", 0);
		}
		
		if( (note/5) != 0){

			n5 = note / 5;
			note -= (n5*5);
			printf("%d nota(s) de R$ 5,00\n", n5);
		}else{
			printf("%d nota(s) de R$ 5,00\n", 0);
		}

		if( (note/2) != 0){

			n2 = note / 2;
			note -= (n2*2);
			printf("%d nota(s) de R$ 2,00\n", n2);
		}else{
			printf("%d nota(s) de R$ 2,00\n", 0);
		}

		if( (note/1) != 0){

			n1 = note / 1;
			note -= (n1*1);
			printf("%d nota(s) de R$ 1,00\n", n1);
		}else{
			printf("%d nota(s) de R$ 1,00\n", 0);
		}

	}

	return 0;
}