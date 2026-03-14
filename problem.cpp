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
   map<string ,int> cnt;
   while(n--)
   {
       string s;
       cin>>s;
       if(cnt[s]==0) cout<<"OK"<<endl;
       else cout<<s<<cnt[s]<<endl;
       cnt[s]++;
   }
}

