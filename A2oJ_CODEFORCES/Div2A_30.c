#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
int n,k;
scanf("%d %d",&n, &k);
int a[n],i;
k=5-k;
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]>k){a[i]='\0';i=i-1;n=n-1;}
}
i=i/3;
printf("%d",i);






return 0;}
