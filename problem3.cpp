/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n;
        int a[n+1];
        for(int i=0; i<n; i++)cin>>a[i];
        cin>>k;
        vector<pair<int,int>>v;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i!=j && a[i]-a[j]==k)
                {
                    v.push_back({a[i],a[j]});
                }
            }
        }
        sort(v.begin(),v.end());
        int sz=unique(v.begin(),v.end())-v.begin();
        cout<<sz<<endl;
    }


}

