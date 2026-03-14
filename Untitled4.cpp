/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void slove()
{
      string s;
        cin>>s;
        int cnt=0;
        int scnt=0;
        int bcnt=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='0' && s[i]<='9') {
                cnt++;
            }
            else if(s[i]>='a' && s[i]<='z')
            {
                scnt++;
            }
            else bcnt++;
        }
        cout<<cnt<<endl;
        cout<<scnt<<endl;
        cout<<bcnt<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    int tc;
    cin>>tc;
    while(tc--)
    {
       slove();

    }
}

