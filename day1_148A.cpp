/*
It is a simple problem, 
given l, m, n, k and d. You need to check how many numbers from 1...d are divisible by either one of l, m, n, k.
output the count of divisible numbers.
input constraint is 1e5, which is small so we can just implement bruteforce and it will pass in provided time.
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
	int k, l, m, n, d;
	cin >> k >> l >> m >> n >> d;
	int ans = 0;
	for(int i = 1; i <= d; i ++) {
		if(i % k == 0 || i % l == 0|| i % m == 0 || i % n == 0) {
			ans ++;
		}
	}
	cout << ans << endl;
}
