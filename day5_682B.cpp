/* The problem was to check wether given aray b, can we create a new array a
where a[i]=2^b[i]. you need to determine if there exist four integers l1,r1,l2,r2 that satisfy the following conditions:
1≤l1≤r1<l2≤r2≤n;
al1+al1+1+…+ar1−1+ar1=al2+al2+1+…+ar2−1+ar2.
i.e. if there is two subarray in array a with same sum.
*OBSERVATION*:
 2^n = sum(2^0+2^1+...+2^n-1 + *1*)
The solution only exits if there is duplicate number.
YOUTUBE VIDEO: https://www.youtube.com/watch?v=Z0JKnlmhVOc 
 */
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t --) {
		int n;
		cin >> n;
		unordered_set<int> a;
		for(int i = 0; i < n; i ++) {
			int temp;
			cin >> temp;
			a.insert(temp);
		}
		
		if(a.size() == n)  {
			cout << "NO\n";
		} else {
			cout << "YES\n";	
		}
	}
	return 0;
}
