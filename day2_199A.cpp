/*
  Problem: https://codeforces.com/problemset/problem/199/A
  The problem is represent given fibonacci number with some of any 3 fibonacci numbers(not distinct),
  as 0 is fibonacci number and so is n(input) we can just ouput "0 0 n"
  Other solution:
   let f(x) = xth fibonacci number.
   lets say
   f(x) = n = f(x - 1) + f(x - 2)
            = f(x - 1) + f(x - 3) + f(x - 4)
   so we can print, "f(x - 1) f(x - 3) f(x - 4)"
   where xth fibonacci number is n
*/
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	cout << "0 0 " << n << endl;
} // 0 1 1 2 3 5 8 13
