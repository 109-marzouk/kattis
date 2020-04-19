// https://open.kattis.com/problems/grassseed
#include <iostream>
using namespace std;

int main() {
  double C, L, w,l, r; r = 0.0;
  cin>> C; cin>> L;
  for(int i = 0; i < L; ++i){
    cin>> w >> l;
    r += l*w;
  }
  cout<< fixed << r*C << endl;
}
