/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

bool is_sorted(const vector<int>& a) {
    for (int i = 0; i < a.size() - 1; ++i) {
        if (a[i] > a[i + 1])
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
     int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int& x : a) cin >> x;

        if (is_sorted(a)) {
            cout << "YES\n";
            continue;
        }

        while (true) {
            int peak = -1;
            for (int i = 1; i < n - 1; ++i) {
                if (a[i - 1] < a[i] && a[i] > a[i + 1]) {
                    peak = i;
                    break;
                }
            }
            if (peak == -1)
                break;
            swap(a[peak], a[peak + 1]);
        }

        cout << (is_sorted(a) ? "YES" : "NO") << '\n';
    }

}

