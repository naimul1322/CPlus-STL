/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
const int mx=1e3+123;
int a[mx];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
     int tc;
     cin>>tc;
     while(tc--)
     {
         int n;
         cin>>n;
          string s;
          cin>>s;
         string r=s;
         sort(r.begin(),r.end());
         int sz=unique(r.begin(),r.end())-r.begin();

        // reverse(r.begin(),r.end());
         for(int i=0; i<sz; i++)
         {
             cout<<r[i];
         }
         cout<<endl;


     }

}

