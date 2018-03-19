#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
int n,p,q,i,j,N[1000],k[1000];
scanf("%d",&n);

if(n<1 || n>100)return 0;

scanf("%d",&p);int P[p];
for(i=0;i<p;i++){
    scanf("%d",&P[i]);
    N[i]=P[i];
}
scanf("%d",&q);int Q[q];
for(i=0;i<q;i++){
    scanf("%d",&Q[i]);
    N[i+p]=Q[i];
}

//for(i=0;i<p+q;i++){
//    printf("%d ",N[i]);
//}

for(i=1;i<=n;i++){
        k[i]=i;
}

int count=0,sum=0;

for(j=1;j<=n;j++){
    for(i=0;i<p+q;i++){
        if(N[i]==k[j]){count=1;sum+=count;;break;}
    }
   // if(count!=1)break;
   // count=0;
}
//if(count!=1)printf("yes");else printf("no");
if(sum==n)printf("I become the guy.");else printf("Oh, my keyboard!");




return 0;}
