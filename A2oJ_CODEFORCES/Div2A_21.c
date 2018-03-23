#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
int n,m,a,b,suma,sumb;
scanf("%d %d %d %d", &n, &m, &a, &b);

if(n>m){
    int c,d;
    c=n/m;d=n%m;
    suma=a*n;
    sumb=(c*b)+(d*a);
    c=c+1;c=c*b;if(c<suma)suma=c;
    if (suma<sumb)printf("%d",suma);else printf("%d",sumb);
}
else{
     sumb=b;
     suma=a*n;
     if (suma<sumb)printf("%d",suma);else printf("%d",sumb);

}

return 0;}
