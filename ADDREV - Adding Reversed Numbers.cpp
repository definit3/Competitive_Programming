using namespace std;
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <math.h>


#define rep(i,n) for(auto i=0; i<(n); i++)
#define mem(x,val) memset((x),(val),sizeof(x));
#define rite(x) freopen(x,"w",stdout);
#define read(x) freopen(x,"r",stdin);
#define all(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
#define pb push_back
#define clr clear()
#define inf (1<<30)
#define ins insert
#define xx first
#define yy second
#define eps 1e-9
typedef long long lli;
typedef unsigned long long ulli;
typedef vector<int> vi;
typedef map<int,int> mii;
typedef set<int> si;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

lli counter=0,neww=0;

lli fn_find(lli x)
{
    if(x==0)return counter;
    x=x/10;
    counter+=1;
    fn_find(x);
}

lli fn_reverse(lli x)
{
    lli d=fn_find(x);
    neww=0;
    for(int i=1;i<=d;i++)
    {
        lli f,foo=1,bar=1,j;
        for(j=1;j<=i;j++){foo*=10;}
        f=x%foo;
        for(j=1;j<=i-1;j++){bar*=10;}
        f-=x%bar;
        f/=bar;
        foo=1;
        for(j=1;j<=d-i;j++)foo*=10;
        neww+=f*foo;
    }
    return neww;

}

int main() {
    ios_base::sync_with_stdio(0);
    lli t,n,m,sum;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        counter=0;n=fn_reverse(n);
        counter=0;m=fn_reverse(m);
        sum=n+m;
        counter=0;
        cout<<fn_reverse(sum)<<endl;
    }

    return 0;
}
