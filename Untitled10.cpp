/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
     int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long ans = a + b;

        for (int s = 1; s <= 200000; ++s) {
            long long steps = (s - 1) + ((a + s - 1) / s) + ((b + s - 1) / s);
            ans = min(ans, steps);
        }
        cout << ans << endl;
    }

}
