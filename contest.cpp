/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
bool ans(string s,string t)
{
    if(t.size()>s.size()) return false;
    int k=0;
    for(auto ch: t)
    {
        int pos=s.find(ch,k);
        if(pos==string::npos){
            return false;
        }
        k=pos+1;
    }
    return true;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s,k;
        cin>>s>>k;
        if(ans(s,k))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


}
