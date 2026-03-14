/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

    int n,q;
    cin>>n>>q;
    stack<int> st[n];
    for(int i=0; i<q; i++)
    {
        int tp;
        cin>>tp;
        if(tp==0)
        {
            int t,x;
            cin>>t>>x;
            st[t].push(x);
        }
        else if(tp==1)
        {
            int t;
            cin>>t;
            if(st[t].empty())
            {

            }
            else
            {
                cout<<st[t].top()<<endl;
            }
        }
        else
        {
            int t;
            cin>>t;
            st[t].pop();
        }
    }


}

