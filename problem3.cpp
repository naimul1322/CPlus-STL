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
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>>v;
        for(int i=0; i<m; i++)
        {
            int a,b;
            cin>>a>>b;
            v.push_back({a,b});
        }
        sort(v.begin(),v.end());
        int sz=unique(v.begin(),v.end())-v.begin();
        if(sz==m)
        {
            cout<<"possible"<<endl;
        }
        else cout<<"Impossible"<<endl;
    }


}

