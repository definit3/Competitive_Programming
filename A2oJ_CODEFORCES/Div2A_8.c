#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
int n,m=1;
int ones,tens,hundreds;
scanf("%d",&n);
//if(n==799 || n==94||n==141){printf("YES");m=0;}
if(n<1||n>1000)return 0;
ones=n%10;
tens=(n%100)/10;
hundreds=(n-(n%100))/100;

if(n<10&&(ones==4||ones==7))printf("YES");
else if(n<100&&(ones==4||ones==7)&&(tens==4||tens==7))printf("YES");
else if((ones==4||ones==7)&&(tens==4||tens==7)&&(hundreds==4||hundreds==7))printf("YES");
else if((n%4)==0 || (n%7)==0||(n%47)==0||(n%74)==0||(n%447)==0)printf("YES");
else if(m==1) printf("NO");

return 0;}


