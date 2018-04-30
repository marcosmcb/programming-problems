#include <stdio.h>
 
int main() {
    double a, pi=3.14159;
    
    scanf("%lf", &a);

    printf("A=%.4lf\n", pi * (a*a) );

    return 0;
}
