#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
int a,b,c;
int x[6],i;
scanf("%d %d %d",&a, &b,&c);
//if(a==1&&b==1&&c==1){printf("3");return 0;}
x[1]=a+b*c;
x[2]=a*(b+c);
x[3]=a*b*c;
x[4]=(a+b)*c;
x[5]=a+b+c;
a=0;
for(i=1;i<6;i++){
    if(x[i]>a)a=x[i];
}
printf("%d",a);


return 0;}
