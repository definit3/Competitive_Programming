//DEFINITE

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

lli counter=1,neww=0,t,n,k,foo=1;

int main()
{
    ios_base::sync_with_stdio(0);
    cin>>t;
    lli arr[200]={0};
    while(t--)
    {
        cin>>n;
        arr[0]=1;
        lli j=0;
        k=1;
        for(lli i=1;i<=n;i++)
        {
           lli ci=0;
            for(lli p=0;p<k;p++)
            {
                counter=i*arr[p]+ci;
                arr[p]=counter%10;
                counter/=10;
                ci=counter;
            }
            while(ci>0)
            {
                arr[k]=ci%10;
                ci/=10;
                k++;
            }
        }
        for(int bar=k-1;bar>=0;bar--)cout<<arr[bar];
        cout<<endl;
    }
    return 0;
}
