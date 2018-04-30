#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t, n, c, m;
    scanf("%d", &t);
    while ( t-- )
    {
        scanf("%d%d%d",&n,&c,&m);
        int answer = 0, aux=0, aux2=0,res=0; 
        /** Write the code to compute the answer here. **/
        answer += (int) (n/c);
        
        aux = answer;
        
        while(aux >= m)
        {
            aux2 = (int) (aux/m);
            
            answer += aux2;
            
            aux = (aux%m) + aux2;
            
            
        }
        
        printf("%d\n",answer);
    }
    return 0;
}