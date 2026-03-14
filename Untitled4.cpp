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
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int d=v[1]-v[0];
    vector<int> tmp;
    for(int i=2; i<n; i++)
    {
        if(v[i+1]-v[i]==d){
            tmp.push_back(d);
        }
    }
    for(auto u: tmp)
    {
        cout<<u<<" ";
    }
    cout<<endl;


}

