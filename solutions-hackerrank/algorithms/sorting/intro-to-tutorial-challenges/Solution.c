#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    
    int v, ar[100], n,m,e,d,i;
    
    scanf("%d%d",&v,&n);
    
    for(i=0; i < n; i++)    scanf("%d",&ar[i]);
    
    e = -1;
    d = n;
    
    while(e < d-1)
    {
        m = (e+d)/2;
        if(v > ar[m])   e = m;
        else d = m;
    }
    
    printf("%d\n",d);
    return 0;
}
