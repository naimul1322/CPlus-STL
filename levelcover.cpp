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
    set<int> s;
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int a;
        cin>>a;
        s.insert(a);

    }
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int a;
        cin>>a;
        s.insert(a);

    }
    if(s.size()==n) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;



}

