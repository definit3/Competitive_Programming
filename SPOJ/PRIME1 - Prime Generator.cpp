using namespace std;
#include <bits/stdc++.h>
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

int main() {
    ios_base::sync_with_stdio(0);
    lli t,m,n;
    cin>>t;

    while(t--)
    {
        cin>>m>>n;
            for(lli i=m;i<=n;i++)
            {
                int flag=0;
                if(i==1)continue;
                else if(i==2|| i==3 || i==5 || i==7){cout<<i<<endl;continue;}
                if(i>6 && i%6!=1 && i%6!=5)continue;
                flag=0;
                for(lli j=2;j*j<=i;j++)
                    if(i%j==0){flag=1;break;}

                if(flag!=1)cout<<i<<endl;
            }
        cout<<endl;
    }


    return 0;
}
