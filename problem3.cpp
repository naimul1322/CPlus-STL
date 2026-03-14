/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int moves(int a,int b)
{
    int mxdist=max(a,b);
    int mndist=INT_MAX;
    int limit=sqrt(2*mxdist)+2;
    for(int i=1; i<=limit; i++)
    {
        int jump=(a+i-1)/i+(b+i-1)/i;
        int total=(i-1)+jump;
        mndist=min(mndist,total);
    }
    return mndist;
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
        int a,b;
        cin>>a>>b;
        int result=moves(a,b);
        cout<<result<<endl;
    }


}

