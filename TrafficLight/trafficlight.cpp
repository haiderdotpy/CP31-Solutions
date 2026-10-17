#include <bits/stdc++.h>
using namespace std; 

typedef long long ll; 

void solve() {
	int n; char c; cin >> n >> c; 
	string s; cin >> s; 

	s = s + s; 
	int ans = 0, count; 
	bool gseen = false; 

	for (int i=2*n-1; i>=0; i--) {
		if (!gseen && s[i] == 'g') gseen = true; 
		if (gseen) {
			if (s[i] == 'g') count = 0; 
			else { count++; if (s[i] == c) ans = max(ans, count); } 
		} 
	}

	cout << ans << '\n';	
}

int main() {
	int t; cin >> t; 
	while (t--) solve(); 
	return 0; 
} 
