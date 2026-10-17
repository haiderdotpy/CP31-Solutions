#include <bits/stdc++.h>
using namespace std; 
 
typedef pair<int, int> pi; 
typedef long long ll; 

void solve() {
	int n, k; cin >> n >> k; 
	vector<int> a(n); 
	for (int i=0; i<n; i++) cin >> a[i]; 
	
	for (int i=0; i<n; i++) 
		a[i] = (a[i] % k) ? (a[i] % k) : k; 

	vector<pi> v(n); 
	for (int i=0; i<n; i++) 
		v[i] = { a[i], i+1}; 

	sort(v.begin(), v.end(), [&](const pi a, const pi b) {
			if (a.first == b.first) 
				return a.second > b.second; 
			return a.first < b.first; 
		} 
	    ); 

	for (int i=n-1; i>=0; i--) 
		cout << v[i].second << " "; 

	cout << '\n';
}

int main() {
	int t; cin >> t; 
	while (t--) solve(); 
	return 0; 
} 
