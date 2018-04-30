#include <stdio.h>

int main() {
    int t,num,quant,aux,dig;
    
    scanf("%d",&t);
    
    while( t-- )
    {
        scanf("%d",&num);
        aux = num;
        quant = 0;
        
        while(aux>0)
        {
            dig = aux%10;
            if( (dig>0) && (num%dig) == 0 )  quant++;
            aux = (int) (aux/10);       
        }
        printf("%d\n",quant);
    }
    return 0;
}