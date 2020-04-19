// https://open.kattis.com/problems/judgingmoose
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int x,y;
  cin >> x >> y;
  if(x == y and x+y != 0) cout << "Even " << x * 2 << endl;
  else if(x != y and x+y != 0) cout << "Odd " << max(x,y) * 2 << endl;
  else cout << "Not a moose" << endl;
}
