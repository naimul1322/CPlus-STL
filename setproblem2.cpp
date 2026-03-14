/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

    set<int> s;
    int q;
    cin>>q;
    while(q--)
    {
        int t,x;
        cin>>t>>x;
        if(t==1)
        {
            s.insert(x);
        }
        else if(t==2)
        {
            s.erase(x);
        }
        else{
            if(s.count(x)==1) cout<<"YES"<<endl;
            else cout<<"No"<<endl;
        }
    }


}

