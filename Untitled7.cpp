/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

    int n;
    cin>>n;
    vector<int>v(n);
    map<int,int>cnt;
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
        cnt[v[i]]++;
    }
    int ans=0;
    for(auto u: cnt)
    {
        if(u.second>=u.first)
        {
            ans+=(u.second-u.first);
        }
        else ans+=u.second;
    }
    cout<<ans<<endl;


}

