#include <bits/stdc++.h>
using namespace std; 

typedef long long ll; 

void solve() {
	int n; ll d; cin >> n >> d; 
	vector<ll> p(n); 
	for (int i=0; i<n; i++) cin >> p[i]; 

	int l = 0, r = n-1; 
	int ans = 0, c = 1; 

	sort(p.begin(), p.end()); 

	while (l <= r) {
		if ((ll)p[r]*c > d) { ans++; c = 1; r--; }
		else { 
			if (l >= r) break; 
			c++; l++; 
		}
	}

	cout << ans << '\n';
}

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr); 

	int t=1; // cin >> t; 
	while (t--) solve(); 
	return 0; 
} 
