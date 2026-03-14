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
    map<int,int> cnt;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        cnt[v[i]]++;
    }
    int ans=INT_MAX;
    for(int i=0; i<n; i++) ans=min(ans,cnt[v[i]]);
    cout<<ans<<endl;


}

