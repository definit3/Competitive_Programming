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
    cin>>t;
    while(t--)
    {
        lli x,y;
        cin>>x>>y;
        if(x==y)
        {
            if(x==0)cout<<0<<endl;
            else if(x==1)cout<<1<<endl;
            else if(x%2==0)cout<<2*x<<endl;
            else cout<<(2*x)-1<<endl;
        }
        else
        {
            if(y+2!=x){cout<<"No Number"<<endl;continue;}
            lli z=x+y;
            z/=2;
            if(z%2==0)cout<<x+y-1<<endl;
            else cout<<x+y<<endl;
        }

    }

    return 0;
}
