#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int day, month, year;
    int dayE,monthE,yearE,hackos=0;
    
    scanf("%d %d %d", &day, &month, &year);
    scanf("%d %d %d", &dayE, &monthE, &yearE);
    
    
    if(yearE < year)         hackos = 10000;
    else if(yearE > year)    hackos = 0;
    else if(monthE < month)  hackos += abs(month-monthE)*500;
    else if(monthE > month)  hackos = 0;
    else if(dayE < day)      hackos += abs(day-dayE)*15;
    else                     hackos = 0;
    
    printf("%d\n",hackos);
    
    return 0;
}