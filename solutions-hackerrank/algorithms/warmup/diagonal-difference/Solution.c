#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 100

int main() {
    int mat[MAX][MAX], i, j, diag1=0, diag2=0,n;
    
    scanf("%d", &n);
    
    for(i=0; i < n; i++)
    {
        for(j=0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
            
            if(i==j)    diag1 += mat[i][j];
            
            if( (i+j) == (n-1) ) diag2 += mat[i][j];
            
        }
    }
    
    printf("%d\n", abs(diag1 - diag2));
    
    return 0;
}