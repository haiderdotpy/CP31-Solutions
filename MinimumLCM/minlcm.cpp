#include <bits/stdc++.h>
using namespace std; 

typedef long long ll; 

void solve() {
	int n; cin >> n; 
	long long ans = 1;

	for (int i=2; i*i <= n; i++) 
		if (n % i == 0)  { ans = n / i; break; } 

	cout << ans << " " << (n - ans) << '\n';
}

int main() {
	int t; cin >> t; 
	while (t--) solve(); 
	return 0; 
} 
