#include <bits/stdc++.h>
using namespace std; 

typedef long long ll; 

void solve() {
	int n; cin >> n;
	string s; cin >> s; 

	unordered_map<char, int> l, g; // local count and global count
	int ans = 0, score; 

	for (char c: s) g[c]++; 
	for (int i=0; i<n; i++) {
		score = 0; 
		l[s[i]]++; 

		for (auto& it: g) {
			score += (it.second - l[it.first] > 0) + (l[it.first] > 0); 
		}
		ans = max(ans, score); 
	}
	
	cout << ans << '\n';	
}

int main() {
	int t; cin >> t; 
	while (t--) solve(); 
	return 0; 
} 
