#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
int n,m;
scanf("%d %d", &n, &m);
int i;char c[m];
char x[m],y[m];
int j,count=0;
for(i=0;i<m-1;i++){
    x[i]='.';
}x[m-1]='#';

for(i=1;i<m;i++){
    y[i]='.';
}y[0]='#';

for(i=0;i<m;i++){
    c[i]='#';
}

for(i=0;i<n;i++){
       {if(i%2==0) for(j=0;j<m;j++){printf("%c",c[j]);}
       if(i%2==0) printf("\n");
       else if(count%2==0){for(j=0;j<m;j++){printf("%c",x[j]);}
            printf("\n");count+=1;}
            else {for(j=0;j<m;j++){printf("%c",y[j]);}printf("\n");count+=1;}}

}




return 0;}
