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
     vector<int> v(n);
     for(int i=0; i<n; i++) cin>>v[i];
     int k;
     cin>>k;
     reverse(v.begin(),v.begin()+k);
     for(auto u: v)
     {
         cout<<u<<" ";
     }
     cout<<endl;

}

