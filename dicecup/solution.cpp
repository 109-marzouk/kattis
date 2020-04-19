// https://open.kattis.com/problems/dicecup
#include <iostream>
using namespace std;
int main() {
  int n,m;
  cin>> n >> m;
  if(n > m){
    int o = n;
    n = m;
    m = o;
  }
  for(int i = n+1; i < m+2; i++) cout<< i << endl;
}
