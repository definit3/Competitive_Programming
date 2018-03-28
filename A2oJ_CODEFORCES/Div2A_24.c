#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
int s,n,i;
scanf("%d %d",&s,&n);
int x[n],y[n];
int j,temp,tempy;
int sumx,sumy;
for(i=0;i<n;i++){
    scanf("%d %d",&x[i],&y[i]);
}



for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(x[i]>x[j]){
            temp=x[i];tempy=y[i];
            x[i]=x[j];y[i]=y[j];
            x[j]=temp;y[j]=tempy;
        }
    }
}



for(i=0;i<n;i++){
    if(s<=x[i]){n=69;break;}
    s=s+y[i];
}



if(n==69){printf("NO");}
else printf("YES");





return 0;}
