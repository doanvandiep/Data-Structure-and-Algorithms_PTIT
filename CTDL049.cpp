#include<bits/stdc++.h>
using namespace std;
#define ll long long
void check(int n, int k) {
    int a[n+1]={0};
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0, r = n - 1;  // Điều chỉnh giới hạn của l và r
    int ok = 0;

    while (l <= r) {
        int m = (l + r) / 2;

        if (a[m] == k) {
            cout << m+1 << endl;
            ok = 1;
            break;
        } else if (a[m] > k) {
            r = m - 1;  // Điều chỉnh giới hạn r
        } else {
            l = m + 1;  // Điều chỉnh giới hạn l
        }
    }

    if (ok == 0)
        cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        check(n, k);
    }

    return 0;
}
