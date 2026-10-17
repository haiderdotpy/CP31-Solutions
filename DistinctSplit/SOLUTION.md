# Solution 

## Approach
Maintain two frequency counts: global and local. Global is calculated once and has the frequency of all the characters of string. Local contains the character frequency till the $i$-th element during traversal. We can get frequency on the right of an element using local and global frequency maps. 

For each character, we count unique elements on both parts of string; and return the maximum over all characters. 

## Code 

```cpp
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
```

**Verdict**: `AC` ([submission link](https://codeforces.com/contest/1791/submission/394928733))
