#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char h[1000],ne[1000],z[]="hello";
int n,i;
int a=0,b=0,c=0,d=0,e=0;
scanf("%s",h);
n=strlen(h);
for(i=0;i<n;i++){
    if(h[i]=='h'&&a==0){ne[0]='h';a=1;}
    else if(h[i]=='e'&&b==0 &&a==1){ne[1]='e';b=1;}
    else if(h[i]=='l'&&c==0&&b==1){ne[2]='l';c=1;}
    else if(h[i]=='l'&&d==0&&c==1){ne[3]='l';d=1;}
    else if(h[i]=='o'&&e==0&&d==1){ne[4]='o';e=1;}
}

for(i=0;i<5;i++){
        if(ne[i]==z[i])continue;
    printf("NO");return 0;}
printf("YES");
return 0;}


