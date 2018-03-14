#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
int n,i;
scanf("%d",&n);
int x[n],y[n],z[n];
int sumx=0,sumy=0,sumz=0;
for(i=0;i<n;i++){
    scanf("%d %d %d",&x[i],&y[i],&z[i]);
}
for(i=0;i<n;i++){
        sumx+=x[i];
        sumy+=y[i];
        sumz+=z[i];
    }
if(sumx==0&&sumy==0&sumz==0)printf("YES");else printf("NO");

return 0;}
