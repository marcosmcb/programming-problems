#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t,l,r,sq1,sq2,c,i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&l,&r);
        sq1=sqrt(l);
        sq2=sqrt(r);
        c=0;
        for(i=sq1;i<=sq2;i++)
        {
           j=i*i;
           if(j>=l && j<=r)   c++;
        }
        printf("%d\n",c);
    }
    return 0;
}