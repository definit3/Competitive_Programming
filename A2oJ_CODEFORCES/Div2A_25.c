#include <stdio.h>
#include <string.h>
#include <math.h>

int move(int n,int r, int s){
    int moves,remain;
    remain=s+r;
  //  printf("    REMAIN- %d",remain);
    moves=n/2+remain;
    return moves;
}

int main(){
int n,m,moves;int r=0,count=0,on;
scanf("%d %d", &n, &m);int s;
if(n%2==0)s=0;else s=1;
on=n;

do{
    moves=move(n,r,s);
    n=on;

     //printf("\n%d    %d     n- %d", moves,r,n);

    r=r+2;n=n-r;count+=1;
    if(n<0)break;

    if(count>1000){printf("-1");return 0;}
}while(moves%m!=0);

if(moves%m!=0){printf("-1");return 0;}

printf("%d",moves);



return 0;}
