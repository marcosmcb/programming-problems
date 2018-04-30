#include <stdio.h>
 
int main() {
 
    int num, hours;
    double sal;
    
    scanf("%d %d %lf", &num, &hours, &sal);
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", hours*sal);
    
    return 0;
}