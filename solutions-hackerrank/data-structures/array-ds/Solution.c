#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, i=0, *vet;
    
    scanf("%d",&n);
    
    vet = (int *) malloc( sizeof(int) * n);
    
    for( ; i < n ;i++)
        scanf("%d",&vet[i]);
    
    for(n=i-1; n >= 0; n--)
        printf("%d ", vet[n]);
    
    return 0;
}