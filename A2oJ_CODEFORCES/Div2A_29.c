#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
int n;
scanf("%d",&n);
int a[n],i,even,odd;
int countodd=0,counteven=0;
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]%2==0){counteven+=1;even=i;}
    else {countodd+=1;odd=i;}
}

if(counteven==1)printf("%d",even+1);
else printf("%d",odd+1);


return 0;}
