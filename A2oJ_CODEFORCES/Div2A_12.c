#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
int n,m,t,count=0;
scanf("%d %d",&n,&m);
t=n*m;
while(t!=0){
    t=t-(n+m-1);
    n=n-1;m=m-1;
    count+=1;
}

if(count%2==0)printf("Malvika");
else printf("Akshat");



return 0;}
