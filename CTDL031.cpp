#include<bits/stdc++.h>
using namespace std;

string check(int n) {
    string ans = "";
    while (n > 0) {
        ans = char(n % 2 + '0') + ans;
        n /= 2;
    }
    return ans;
}

int check1(string s) {
    int sum = 0;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            sum |= 1 << (n - i - 1);
        }
    }
    return sum;
}

void check2(int n) {
    string s = check(n);
    string res = s;
    for (int i = 1; i < s.size(); i++) {
        res[i] = char((s[i] - '0') ^ (s[i - 1] - '0') + '0');
    }
    int sum = check1(res);
    cout << sum << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        check2(n);
    }

    return 0;
}
