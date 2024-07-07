#include<bits/stdc++.h>

# define int long long
# define to int t;cin>>t;while(t--)
# define no int n;cin>>n; // n
# define ar vector<int> arr(n);for(auto &it:arr){cin>>it;} //array
# define for1 for(int i=0 ;i<100 ; i++){if(i==90)break;}
# define for2 for(int i=0 ;i<100 ; i++){if(i==50)break;}
# define so string s;cin>>s;
# define str string 
# define mod 1e9+7
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    to
    {
        int x,y;cin>>x>>y;
        int scy = y/2+y%2;
        int a = (scy*15) - (y*4);
        if(x<=a)
            cout<<scy<<"\n";
        else
        {
            x = x-a;
            int b = x/15 + (x%15?1:0);
            cout<<scy+b<<"\n";
        }
    }
    return 0 ;
}