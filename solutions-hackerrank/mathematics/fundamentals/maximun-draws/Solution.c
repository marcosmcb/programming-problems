#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t, n, i=0;
    
    scanf("%d", &t);
    
    for( ; i < t; i++)
    {
        scanf("%d",&n);
        
        if(n == 1)  printf("%d\n", (n*2));
        else printf("%d\n", n+1);   
    }
    
    return 0;
}