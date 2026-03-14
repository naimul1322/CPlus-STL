/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    int n,m;
    cin>>n>>m;
    map<string ,string >cnt;
    for(int i=0; i<n; i++)
    {
        string name,ip;
        cin>>name>>ip;
        cnt[ip]=name;
    }
    while(m--)
    {
        string s,ip;
        cin>>s>>ip;
        ip.pop_back();
        cout<<s<<" "<<ip<<"; #"<<cnt[ip]<<endl;
    }


}

