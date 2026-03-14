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

    int n;
    cin>>n;
    priority_queue<int> q;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        q.push(-x);
    }
    long long ans=0;
    for(int i=0; i<n; i++)
    {
        if(q.size()>1)
        {
            int a=-q.top();
            q.pop();
            int b=-q.top();
            q.pop();
            q.push(-(a+b));
            ans+=(a+b);
        }
    }
    cout<<ans<<endl;

    }
}

