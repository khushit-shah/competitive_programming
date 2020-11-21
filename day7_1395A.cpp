/* We can create a palindrome with chars [r, g, b, w] if there is less then equal to one of them is odd. if there is more then one of the numbers odd then we can't create palindrome.
  Also we only need to check 2 times, because every time even becomes odd and odd becomes even.
*/
#include <bits/stdc++.h>

using namespace std;

int check(int r, int g, int b, int w) {
	int odd = 0;
	int even = 0;
	
	if(r % 2 == 0)
		even ++;
	else
		odd ++;
	
	if(g % 2 == 0)
		even ++;
	else
		odd ++;
	
	if(b % 2 == 0)
		even ++;
	else
		odd ++;
	
	if(w % 2 == 0)
		even ++;
	else
		odd ++;
	
	return odd <= 1;
}

int main() {
	int t;
	cin >> t;
	while(t --) {
		int r, g, b, w;
		cin >> r >> g >> b >> w;
		int a = min(min(r, min(g, b)), 3);
		for(int i = 0; i < a; i ++) {
			if(check(r, g, b, w)) {
				break;
			} else {
				r --;
				g --;
				b --;
				w += 3;
			}
		}
		if(check(r, g, b, w)) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}
