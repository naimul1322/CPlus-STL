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
    string s;
    cin>>s;
    s.erase(s.begin()+1);
   // s.erase(s.begin());
    s.insert(s.begin(),'i');
    cout<<s<<endl;
   }


}

