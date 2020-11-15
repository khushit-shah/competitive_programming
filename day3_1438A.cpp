/*  the problem looks hard, but is quite simple.
   the problem is given n, create a  array of length n which consists number from 1..n such that all the subarray of the given array is good
   a good array is an array whose sum is divisible by array size.
  the solution is to make an array with all same element.
  i.e [x, x, x, x, x, x, x]
       here all sub array will be divisible by the sub array size.
       for e.g subarray [x, x] = x + x = 2x (which is divisible by 2).
   So you can just print 1, n times.
 */
 #include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t --) {
		int n;
		cin >> n;
		for(int i = 0; i < n - 1; i ++) {
			cout << 1 << " ";
		}
		cout << 1 << endl;
	}	
	return 0;
}
