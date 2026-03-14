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
        char q;
        cin>>q;
        set<int> s;
        int x;
        cin>>x;
        if(q=='a')
        {

            s.insert(x);
        }
        else if(q=='b')
        {
            for(auto u: s)
            {
                cout<<u<<endl;
            }
        }
        else if(q=='c')
        {
            s.erase(x);
        }
        else if(q=='d')
        {
            if(s.count(x)==1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else
        {
            cout<<s.size()<<endl;
        }
    }


}

