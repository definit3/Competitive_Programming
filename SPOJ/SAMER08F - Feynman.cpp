//DEFINITE
using namespace std;
#include <iostream>
#include <string>
#include <math.h>
#include <bits/stdc++.h>
#define mem(x,val) memset((x),(val),sizeof(x));
#define rite(x) freopen(x,"w",stdout);
#define read(x) freopen(x,"r",stdin);
#define all(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
#define pb push_back
#define clr clear()
typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef map<int,int> mii;
typedef set<int> si;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

lli i=0,j=0,k=0,n=0,t=0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while(1)
    {
        cin>>n;
        if(n==0)return 0;
        lli ans=0;
        for(i=1;i<=n;i++)
            ans+=i*i;
        cout<<ans<<endl;
    }
}
