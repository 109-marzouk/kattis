// https://open.kattis.com/problems/hangingout
#include <iostream>
using namespace std;

int main() {
  int l, x, r, z;
  cin>> l >> x;
  string e; int p;
  r=0; z=0;
  for(int i = 0; i < x; i++){
    cin>> e >> p;
    if(e == "enter"){
      if(p <= l-r) r += p; else z+= 1;
    }
    else r -= p;
  }
  cout<< z << endl;
}
