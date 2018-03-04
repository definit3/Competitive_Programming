#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
int n,i,j,c,d,z;
scanf("%d",&n);int a[n+1];
if(n<1||n>100)return 0;
for(i=1;i<=n;i++){scanf("%d",&a[i]);}
for(i=1;i<=n;i++){
    for(j=i;j<=n;j++){
        if(a[i]<a[j]){
            c=a[i];
            a[i]=a[j];
            a[j]=c;
        } } }
    c=0;i=2;j=1;z=2;d=0;

while(1){
for(i=z;i<=n;i++){
c+=a[i];}
for(j=1;j<z;j++){
d+=a[j];}
if(d>c)break;
else{z++;c=0;d=0;}
}
printf("%d",j-1);


return 0;}
