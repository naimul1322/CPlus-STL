/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

   string s;
   cin>>s;
   string tmp=s;
//   int len=0;
//   while(tmp[len]!='\0')len++;
//   for(int i=0; i<len/2; i++)
//   {
//       char c=tmp[len-i-1];
//       tmp[len-i-1]=tmp[i];
//       tmp[i]=c;
//   }
   reverse(tmp.begin(),tmp.end());
   if(tmp==s) cout<<"Palindrom"<<endl;
   else cout<<"NO"<<endl;

}

