#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n, *vec,i;
    long long int sum=0;
    
    scanf("%d", &n);
    
    vec = (int*) malloc(sizeof(int)*n);
    
    for(i=0; i < n; i++)
    {
        scanf("%d",&vec[i]);
        sum += vec[i];
    }
    printf("%lld\n",sum);
    
    return 0;
}