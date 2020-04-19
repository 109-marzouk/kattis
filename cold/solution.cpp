// https://open.kattis.com/problems/cold
#include <iostream>
using namespace std;
int main() {
  int n, r = 0, c;
  cin>> n;
  for(int i = 0; i < n; i++)
  {
    cin >> c;
    if(c < 0) r+=1;
  }
  cout << r << endl;
}
