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
         long long n,k;
         cin>>n>>k;
         if(n%2==0)
         {
             cout<<"YES"<<endl;
         }
         else
         {
             if(k%2==1)
             {
                 cout<<"YES"<<endl;
             }
             else cout<<"NO"<<endl;
         }
     }

}

