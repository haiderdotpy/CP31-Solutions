# Solution 

## Approach 
To get a number smaller than $LCM(1, n-1)=n-1$, we need some $a$, $b$ of the form, 
$$LCM(m, pm) = pm = n - m: m + pm = (p+1)m = n$$

Therefore to maxmize our LCM, we need to minimize our $m$. Since $(p+1)m=n$, $m$ must divide $n$.

Let $q$ be the smallest divisor of $n$ greater than $1$. Then, $n/q$ is the largest proper divisor of $n$. Hence, we choose

$$
a=\frac{n}{q},\qquad b=n-\frac{n}{q}.
$$

We can find $q$ by checking divisors in increasing order up to $\sqrt n$. If no divisor is found, $n$ is prime, and its largest proper divisor is $1$.

## Code 
```cpp
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
```

**Verdict**: `AC` ([submission link](https://codeforces.com/contest/1765/submission/394940931))
