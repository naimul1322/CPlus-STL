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
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(),v.end());
    int l=0, r=n-1;
    int ans;
    int x;
    cin>>x;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(v[mid]==x)
        {
            ans=mid;
            break;
        }
        else if(v[mid]<x)l=mid+1;
        else r=mid-1;
    }
     cout<<ans<<endl;

}

