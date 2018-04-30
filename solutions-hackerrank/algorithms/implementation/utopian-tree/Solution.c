#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t,n,i,height;
    
    scanf("%d", &t);
    while( t-- )
    {
        height=1;
        scanf("%d",&n);
     
        for(i=1; i <= n; i++)
        {
            if(i%2 != 0)    height *= 2;
            else height++;
        }
        
        printf("%d\n",height);
        
    }
    return 0;
}