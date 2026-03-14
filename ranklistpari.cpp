/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    int n,k;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i].first>>v[i].second;
        v[i].first*=-1;
    }
    sort(v.begin(),v.end());
//    int ans=0;
//    for(auto u: v)
//    {
//        if(u==v[k-1])ans++;
//    }
//    cout<<ans<<endl;

    for(auto u: v)
    {
        cout<<u.first*-1<<" "<<u.second<<endl;
    }


}

