// https://open.kattis.com/problems/teacherevaluation
#include <iostream>
using namespace std;
int main() {
  int n, p;
  cin>> n >> p;
  if(p==100) cout<< "impossible\n";
  else{
    int r = 0;
    int tot = 0;
    for(int i = 0; i < n; i++){
      int e;
      cin>> e;
      tot += e;
    }
    while(tot/n < p){
      tot += 100;
      n += 1;
      r += 1;
    }
    cout<< r <<endl;
  }
}
