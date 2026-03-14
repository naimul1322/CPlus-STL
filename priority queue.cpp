/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

const int mx=1e5+123;
int a[mx];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    priority_queue<int> q;
    int  n;
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++)
    {
        q.push(a[i]);
        if(q.size()>=3)
        {
            int a=q.top();
            q.pop();
            int b=q.top();
            q.pop();
            int c=q.top();
            q.pop();
            cout<<1ll*a*b*c<<endl;
            q.push(a);
            q.push(b);
            q.push(c);
        }
        else
        {
            cout<<-1<<endl;
        }
    }

}

