// https://open.kattis.com/problems/oddities
#include <iostream>
using namespace std;

int main() {
  int n, a;
  cin >> n;
  string x[n];
  for(int i = 0; i < n; i++){
    cin >> a;
    if(a%2==0) x[i] = to_string(a) + " is even";
    else x[i] = to_string(a) + " is odd";
  }
  for(auto n1 : x) cout << n1 << endl;
}
