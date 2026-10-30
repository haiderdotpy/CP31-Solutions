# Solution 

## Approach 
Since the power of all teammates becomes equal to the highest power of the group, we want to greedily maximize the power of all groups by teaming up the lowest powerful players with the maximum powered player which has not played yet. 

## Code 

```cpp
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
```

**Verdict**: `AC` ([submission link](https://codeforces.com/contest/1725/submission/396691607))
