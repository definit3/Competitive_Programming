#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

int n,m,i,temp,j;
int d=1000,l;
scanf("%d %d",&n,&m);
int a[m];
for(i=0;i<m;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<m;i++){
    for(j=i+1;j<m;j++){
            if(a[i]<a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;}
}}
//for(i=0;i<m;i++){
//printf("%d ",a[i]);}
n=n-1;

for(i=0;i<m-n;i++){
l=a[i]-a[i+n];
if(l<d)d=l;
}
printf("%d",d);




return 0;}
