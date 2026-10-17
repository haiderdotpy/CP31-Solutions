#include <bits/stdc++.h>
using namespace std; 

typedef long long ll; 

void solve() {
	int n; cin >> n;
	
	vector<int> a(n), b(n); 
	for (int i=0; i<n; i++) cin >> a[i]; 
	for (int i=0; i<n; i++) cin >> b[i]; 

	unordered_map<int, int> ap, bp; 
	int ans = 1, currPref = 1; 

	for (int i=1; i<n; i++) {
		if (a[i] == a[i-1]) 
			currPref++; 
		else {
			ap[a[i-1]] = max(currPref, ap[a[i-1]]+(ap[a[i-1]] == 0)); 
			currPref = 1;
		}
	}
	
	ap[a[n-1]] = max(currPref, ap[a[n-1]]+(ap[a[n-1]] == 0));
	currPref = 1; 

	for (int i=1; i<n; i++) {
		if (b[i] == b[i-1]) 
			currPref++; 
		else { 
			bp[b[i-1]] = max(currPref, bp[b[i-1]]+(bp[b[i-1]] == 0)); 
			currPref = 1;
		}
	}

	bp[b[n-1]] = max(currPref, bp[b[n-1]]+(bp[b[n-1]] == 0)); 
	
	for (auto& it: ap) {
		ans = max(ap[it.first] + bp[it.first], ans); 	
	}

	for (auto& it: bp) {
		ans = max(it.second, ans); 
	}
	
	cout << ans << '\n';
}

int main() {
	int t; cin >> t; 
	while (t--) solve(); 
	return 0; 
} 
