/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

    string s1,s2,s3;
    char c;
    cin>>c;
    getline(cin,s1);
    s1=c+s1;
    getline(cin,s2);
    s2=c+s2;
    getline(cin,s3);
    s3=c+s3;
    int cnt1=0;
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u')
        {
            cnt1++;
        }
    }
    int cnt2=0;
    for(int i=0; i<s2.size(); i++)
    {
        if(s2[i]=='a' || s2[i]=='e' || s2[i]=='i' || s2[i]=='o' || s2[i]=='u')
        {
            cnt2++;
        }
    }
    int cnt3=0;
    for(int i=0; i<s3.size(); i++)
    {
        if(s3[i]=='a' || s3[i]=='e' || s3[i]=='i' || s3[i]=='o' || s3[i]=='u')
        {
            cnt3++;
        }
    }

    cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<endl;


}

