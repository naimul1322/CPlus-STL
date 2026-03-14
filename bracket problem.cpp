/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
bool isbalance(char c1, char c2)
{
    return (c1=='(' && c2==')') || (c1=='{' && c2=='}') || (c1=='[' && c2==']');
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        stack<char> st;
        bool ans=1;
        for (auto u: s)
        {
            if(u=='(' || u=='{' || u=='[') st.push(u);
            else
            {
                if(st.empty()){
                    ans=0;
                    break;
                }
                else
                {
                    if(isbalance(st.top(),u))
                    {
                        st.pop();
                    }
                    else
                    {
                        ans=0;
                        break;
                    }
                }
            }
        }
        if(!st.empty())ans=0;
        if(ans) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }


}

