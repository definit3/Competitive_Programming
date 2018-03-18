#include <stdio.h>
#include <string.h>
#include <math.h>
// NOT WORKING CODE
int main(){
char s[1001];int i=0;
int x;
do{
    scanf("%c",&s[i]);
    i++;
}while(s[i-1]!='}');

int j,n=strlen(s);
int count =0,t;

x=n/3;
x=2*(x-1);

for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
       if(s[i]>s[j]){
        t=s[i];
        s[i]=s[j];
        s[j]=t;
       }
    }
}

if(s[x]==',')x=x+1;
int r,o=0,X=x;

do{
for(i=x;i<n-2;i++){
    if(i==x){r=s[i];continue;}

    if(s[i]==r)count+=1;
}
    o+=count;
    x=x+count+1;count=0;}while(x<=n-4);
    count=n-2-X;
    count=count-o;

printf("%d",count);


return 0;}
