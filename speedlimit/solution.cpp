// https://open.kattis.com/problems/speedlimit
#include <iostream>
using namespace std;
int main() {
  while(true){
    int n, s, h, r = 0, per = 0;
    cin>> n;
    if(n<0) break;
    for(int i = 0; i < n; i++){
      cin>> s >> h;
      r += ((h - per) * s);
      per = h;
    }
    cout<< r << " miles" <<endl;
  }
}
