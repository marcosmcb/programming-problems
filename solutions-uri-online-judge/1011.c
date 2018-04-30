#include <stdio.h>
 
int main() {

    long long int raio;
    double pi=3.14159;
    
    scanf("%lld",&raio);
    
    printf("VOLUME = %.3lf\n", (4.0/3) * pi * (raio*raio*raio) );
 
    return 0;
}