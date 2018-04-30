#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100000
 
typedef struct R{
    long long int r;
    long long int s;
    long long int t;
}Result;
 
Result gcd(long long int r0, long long int r1);
unsigned long long int * prime();

int intToBin(int d, int * vec);

long long int quadradoMulti( int c, int * binVec, int length, long long int n );

int main(){
    Result result;
    unsigned long long int n, p, q, e, d, c;
    long long int i,m;  
    unsigned long long int *primes;
    int binVec[33],length;

    primes = prime();
    
    scanf("%llu %llu %llu",&n,&e,&c);
    
    for(i=(int)(sqrt(n));i>=0;i-=1){
        if(primes[i]){
            if(!(n % i)){
                p = i;
            }
        }
    }
    
    q = (unsigned long long int) (n / p);

    result = gcd((p-1)*(q-1),e);

    d = result.t;
    
    
    length = intToBin(d, binVec);

    m = quadradoMulti(c, binVec, length, n);


    printf("%llu\n", m);
     
    return 0;
     
}
 
Result gcd(long long int r0, long long int r1){
    Result result;
    long long int s[2], t[2], q;
    long long int aux,r0Aux;
 
    r0Aux = r0;

    s[0] = 1;
    s[1] = 0;
 
    t[0] = 0;
    t[1] = 1;
 
    while(r1 != 0){
        //r step
        aux = r1;
        r1 = r0 % aux;
        q = (r0 - r1)/aux;
        r0 = aux;
 
        //s step
        aux = s[1];
        s[1] = s[0] - q * aux;
        s[0] = aux;
 
        //t step
        aux = t[1];
        t[1] = t[0] - q * aux;
        t[0] = aux;
 
    }
 
    result.r = r0;
    result.s = s[0];
     
    if(t[0]>=0)
        result.t = t[0];
    else
        result.t = t[0]+r0Aux;
 
    return result;
 
}

unsigned long long int *prime(){
    
    unsigned long long int i,j;
    unsigned long long int *primes;
    unsigned long long int z = 1;

    primes = malloc(sizeof(unsigned long long int)*MAX);

    for (i=2;i<MAX;i++){
        primes[i]=1;
    }

    for (i=2;i<MAX;i++){
        if (primes[i]){
            for (j=i;i*j<MAX;j++){
                primes[i*j]=0;
            }
        }
    }

    return primes;
}


int intToBin( int d, int *vec) {
    
    int length = 0;
    
    while(d/2){
        
        vec[length] = d % 2;
        d/=2;
        length++;
        
    }
    
    
    return length;

}


long long int quadradoMulti( int c, int *binVec, int length, long long int n ) {
    long long int sqrMult = c;
    int i;
        

    for ( i = length-1; i >= 0; i-- ) {
        sqrMult = (sqrMult * sqrMult) % n;

        
        if ( binVec[i] == 1 )
            sqrMult = (sqrMult * c) % n;
    }

    return sqrMult;

}