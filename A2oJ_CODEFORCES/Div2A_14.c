#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
char s[201];
scanf("%s",s);
int n=strlen(s);
int i,a,b,c;

for(i=0;i<n;i++){
    if(s[i]=='W'){a=1;if(s[i+1]=='U'&&s[i+2]=='B')continue;}
    if(s[i]=='U' &&a==1&&s[i-1]=='W'){b=1;continue;}
    if(s[i]=='B' &&b==1 &&s[i-1]=='U'){c+=1;if(c==1)printf(" ");continue;}
    printf("%c",s[i]);
    a=0;b=0;c=0;

}

return 0;}
