#include <stdio.h>
#include <math.h>
int main() {
    
    long long int n,m,sum;
    scanf("%lld %lld",&n,&m);
    sum = llabs(n-m);
    printf("%lld",sum);
    return 0;
}