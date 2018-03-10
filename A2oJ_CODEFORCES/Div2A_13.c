#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
int n,i,j,count=0;
scanf("%d",&n);
int h[n+1],a[n+1];

for(i=1;i<=n;i++){
    scanf("%d %d",&h[i],&a[i]);
}

for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(i==j)continue;
        if(h[i]==a[j])count+=1;
    }
}
printf("%d",count);

return 0;}
