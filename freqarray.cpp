/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
const int mx=1e5+123;
int frq[mx];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
     int n;
     cin>>n;
     vector<int> v(n);
     for(int i=0; i<n; i++)
     {
         cin>>v[i];
         frq[v[i]]++;
     }
     int x;
     cin>>x;
     cout<<frq[x]<<endl;

}

