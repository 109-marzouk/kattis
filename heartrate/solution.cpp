// https://open.kattis.com/problems/heartrate
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int r; cin >> r;
  string result[r];
  float b,p;
  for(int i = 0; i < r; i++){
    cin >> b >> p;
    result[i] = to_string(((b-1)*60)/p) + " " +  to_string((b*60)/p) + " " +  to_string(((b+1)*60)/p);
  }
  for(auto z : result) cout<< z << endl;
}
