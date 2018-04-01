#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
int n,d,i,tsum=0;
scanf("%d %d", &n, &d);
int t[n];
for(i=0;i<n;i++){
    scanf("%d",&t[i]);tsum+=t[i];}

tsum=(n-1)*10+tsum; if(tsum>d){printf("-1");return 0;}
n=n-1;n*=10;n=n/5;n=((d-tsum)/5)+n;printf("%d",n);


return 0;}
