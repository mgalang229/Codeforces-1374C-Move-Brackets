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
		vector<int> status(n, 0);
		// assign a status for each element:
		// status[i] = 0, for closing brackets with no partner
		// status[i] = 1, balanced brackets
		// status[i] = -1, for opening brackets with no partner
		for (int i = 0; i < n; i++) {
			if (s[i] == '(') {
				for (int j = i + 1; j < n; j++) {
					if (s[j] == ')' && status[j] == 0) {
						status[i] = 1;
						status[j] = 1;
						break;
					}
				}
				if (status[i] != 1) {
					status[i] = -1;
				}
			}
		}
		// the final answer would either be the count of 0 or -1 (can't be both because will partner them together)
		cout << count(status.begin(), status.end(), 0) << '\n';
	}
	return 0;
}
