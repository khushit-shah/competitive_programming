/** The program asks for number of moves required to move box from x,y to x1,y1 if rabbit can only pull it if the rabbit is one unit away from the box.
    The rabbit can start at any posistion.
    The ending position of rabbit does not matther.
    if destination x1, y2, is vertically or horizontally aligned with the source (x, y) then we can just print the difference from source to destination.
    else we can print the distance from source to destination + 2
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while(t --) {
    int x, y, x1, y1;
    cin >> x >> y >> x1>> y1;
    int a = 0;
    if(x != x1 && y != y1) a += 2;
    a += abs(x1 - x) + abs(y1 - y);
    cout <<  a << endl;
  }
}
