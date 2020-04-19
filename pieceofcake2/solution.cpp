// https://open.kattis.com/problems/pieceofcake2
#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int f(int h, int v){ return h * v * 4;}

int main() {
  int n, h, v;
  cin >> n >> h >> v;
  vector<int> z ={f(h,v), f(n-h,n-v), f(n-h,v), f(h, n-v)};
  cout << *max_element(z.begin(), z.end()) << endl;
}
