#include <stdio.h>
 
int main() {
    
    int cod, num, cod2, num2;
    double val, val2;
    
    scanf("%d %d %lf", &cod, &num, &val);
    scanf("%d %d %lf", &cod2, &num2, &val2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", (num*val) + (num2*val2) );
 
    return 0;
}