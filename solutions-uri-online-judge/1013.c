#include <stdio.h>
 
int main() {

    int a,b,c,maior1,maior2;
    scanf("%d %d %d", &a, &b, &c);

    maior1 = (a+b+abs(a-b))/2;
    maior2 = (a+c+abs(a-c))/2;   
    printf("%d eh o maior\n", (maior1+maior2+abs(maior1-maior2))/2);

    return 0;
}