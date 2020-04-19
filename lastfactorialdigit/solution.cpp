// https://open.kattis.com/problems/lastfactorialdigit
#include <iostream>
using namespace std;

int f(int n) {if(n == 1) return 1; return n * f(n-1);}

int main() {
  int n, a;
  cin >> n;
  string x[n];
  for(int i = 0; i < n; i++){
    cin >> a;
    x[i] = to_string(f(a));
  }
  for(auto n1 : x) cout << n1[n1.length()-1] << endl;
}
