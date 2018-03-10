#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
int n,i,max=0,j,c=0,d=0,min=1000;
scanf("%d",&n);
if(n<2||n>100)return 0;
int a[n];
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
   // for(j=i+1;j<n;j++){
    //    if(a[i]>a[j]&&a[i]>max){max=a[i];c=i;}
    //    if(a[i]<a[j]&&a[i]<min){min=a[i];d=i;}
   // }
    if(a[i]>max){max=a[i];c=i;}
    if(a[i]<=min){min=a[i];d=i;}
    }
//printf("%d %d   %d %d\n",max,c,min,d);
n=n-1;
if(c!=0&&c>d)d=d+1;
d=n-d;

//printf("%d  %d",c ,d);


printf("%d",c+d);

return 0;}
