/* we can create the number greedly, choose the min number we can add such that we can create number with m digits,
	now for getting the max number we select the max digit we can such that it does not exceeds the sum.
*/
#include <bits/stdc++.h>

using namespace std;
string ans = "";
int n, m;

// checks wether we can create the number with length m, whose digits sum is k.
int check(int m, int k) {
	return k >= 0 &&  9 * m >= k;
}
int main() {
	cin >> m >> n;
	string res = "";
	if(n == 0 && m > 1) cout << "-1 -1";
	else if (9*m < n) cout << "-1 -1";
	else {
		string mn, mx;
		int sum = n;
		for(int i = 0; i < m; i ++) 
			for(int j = 0; j <= 9; j ++) {
				if(check(m - i - 1, sum - j) && (i > 0 || j > 0 || (m == 1 && j == 0))) {
					mn += to_string(j);
					sum -= j;
					break;
				}
			}
		cout << mn << " ";
		sum = n;
		for(int i = 0; i < m; i ++) 
			for(int j = 9; j >= 0; j --) {
				if(check(m - i - 1, sum - j) && (i > 0 || j > 0 || (m == 1 && j == 0))) {
					mx += to_string(j);
					sum -= j;
					break;
				}
			}
		cout << mx << endl; 
	}
	return 0;
}
