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

lli counter=0,neww=0,t,n,k,foo=1;

lli intlog(lli base, lli x) {
    return (lli)(log(x) / log(base));
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin>>t;
    while(t--)
    {
        cin>>n;
        counter=0;
        k=intlog(5,n);
        for(lli i=1;i<=k;i++)
        {
            foo=1;
            for(lli j=1;j<=i;j++)foo*=5;
            counter+=n/foo;
        }
        cout<<counter<<endl;
    }
}
