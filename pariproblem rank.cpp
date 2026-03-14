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
      int l,r,d,u;
      cin>>l>>r>>d>>u;
      if(l==r &&d==u)
      {
          cout<<"YES"<<endl;
      }
      else cout<<"NO"<<endl;
  }

}

