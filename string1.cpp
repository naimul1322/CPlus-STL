/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

     string s1,s2;
     cin>>s1>>s2;
     transform(s1.begin(),s1.end(),s1.begin(),::tolower);
     transform(s2.begin(),s2.end(),s2.begin(),::tolower);
     if(s1<s2) cout<<-1<<endl;
     else if(s1>s2) cout<<1<<endl;
     else cout<<0<<endl;

}

