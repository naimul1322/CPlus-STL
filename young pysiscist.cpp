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
    int a[3][3];
    int sum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; i++)
        {
            cin>>a[i][j];
            sum+=a[i][j];
        }

    }

    if(sum==0)
    {
        cout<<"Yes"<<endl;

    }
    else cout<<"No"<<endl;


}

