// https://open.kattis.com/problems/heartrate
#include <iostream>
using namespace std;

int main() {
  int r; cin >> r;
  string result;
  float b,p;
  for(int i = 0; i < r; i++){
    cin >> b >> p;
    result += to_string(((b-1)*60)/p) + " " +  to_string((b*60)/p) + " " +  to_string(((b+1)*60)/p) + "\n";
  }
  cout<< result << endl;
}
