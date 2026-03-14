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
    vector<pair<string,string>>v;
     for(int i=0; i<n; i++)
     {
         string s1,s2;
         cin>>s1>>s2;
         v.push_back({s1,s2});
     }
     sort(v.begin(),v.end());
     int sz=unique(v.begin(),v.end())-v.begin();
     cout<<sz<<endl;

}

