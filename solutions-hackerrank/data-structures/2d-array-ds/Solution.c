#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 6

int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int mat[MAX][MAX], hg, larSum, i=0,j=0;
    
    for(i=0 ; i < MAX; i++)
    	for(j=0 ; j < MAX; j++)
        	scanf("%d", &mat[i][j]);
    
    for(i=0; i < 4; i++)
    {
    	for(j=0; j < 4; j++)
    	{
    		hg = mat[i][j] + mat[i][j+1] + mat[i][j+2] + mat[i+1][j+1] + mat[i+2][j] + mat[i+2][j+1] + mat[i+2][j+2];
    		
    		if (i==0 && j==0)	larSum = hg;
    		if(hg > larSum)	larSum = hg;
    	}
    }

    printf("%d\n", larSum);
    
    return 0;
}