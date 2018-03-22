#include <stdio.h>
#include <string.h>
#include <math.h>

//WORKING CODE FOR SMALL VALUE OF N

int main(){
long long int n,k;
scanf("%lld %lld",&n,&k);
long long int N[n+1];long long int i,j=1;
for(i=1;j<=n;i++){
    N[i]=j;j+=2;
}
j=2;
for(i;j<=n;i++){
    N[i]=j;j+=2;
}

printf("%lld", N[k]);


return 0;}
