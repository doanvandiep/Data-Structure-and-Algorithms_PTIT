#include<bits/stdc++.h>
using namespace std;
#define mod 1000000000
int f[1111111], n, k;

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        f[0] = 2;
        f[1] = 2;
        for (int i = 2; i <= n; i++) {
            if (i <= k)
                f[i] = (f[i - 1] * 2) % mod;
            else
                f[i] = (f[i - 1] * 2 - f[i - k - 1]) % mod;
            if (f[i] < 0)
                f[i] += mod;
        }
       cout << f[n] << endl;
    }
    return 0;
}