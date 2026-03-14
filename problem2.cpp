/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

    int m,n;
    cin>>m>>n;
    priority_queue<long long> q;
    for(int i=0; i<m; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    long long ans=0;
    for(int i=0; i<n; i++)
    {
        if(!q.empty())
        {
            int a=q.top();
            q.pop();
            ans+=a;
            a--;
            if(a>0) q.push(a);
        }
    }
     cout<<ans<<endl;

}

