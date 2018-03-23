#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
int n,ones,tens,k;
scanf("%d", &n);
//if(abs(n)<10 || abs(n)>pow(10,9))return 0;
if(n>0)printf("%d",n);
else{
ones=n%10;int l=ones;
tens=(n%100)/10;
ones=(n-ones)/10;
k=n/100;k=k*10;k=k+l;
if(k>ones)printf("%d",k);else printf("%d",ones);
}

return 0;}
