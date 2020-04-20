// https://open.kattis.com/problems/cetvrta
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> xs;
  vector<int> ys;
  int x, y;
  for(int i = 0; i < 3; i++){
    cin>> x >> y;
    if(count(xs.begin(), xs.end(), x) > 0) xs.erase(remove(xs.begin(), xs.end(), x));
    else xs.insert(xs.end(), x);
    if(count(ys.begin(), ys.end(), y) > 0) ys.erase(remove(ys.begin(), ys.end(), y));
    else ys.insert(ys.end(), y);
  }
  cout<< xs[0] << " " << ys[0] << endl;
}
