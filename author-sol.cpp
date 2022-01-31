#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		int ans = 0;
		int balance = 0;
		for (int i = 0; i < n; i++) {			
		 	// if balance is equal to 0, then the opening closing have their own opening brackets
			if (s[i] == '(') {
				balance++;
			} else {
				balance--;
				if (balance < 0) {
					// however, if it encounters a closing bracket and the balance becames negative, then
					// it means that this closing bracket doesn't have an opening bracket so we need increment our answer
					balance = 0;
					ans++;
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
