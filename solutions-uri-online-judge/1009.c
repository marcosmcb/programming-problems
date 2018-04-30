#include <stdio.h>
 
int main() {
 
   char nome[200];
   double sal, venda;
   
   gets(nome);
   scanf("%lf %lf", &sal, &venda);
   printf("TOTAL = R$ %.2lf\n", sal + (venda * 0.15) );
 
    return 0;
}