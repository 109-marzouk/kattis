// https://open.kattis.com/problems/humancannonball2
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
  double n, v, o, x, h1, h2, y, t;
  cin>> n;
  string r[int(n)];
  for(int i = 0; i < n; i++){
    cin>> v >> o >> x >> h1 >> h2;
    t = x / (v * cos(o*3.14159265/180));
    y = (v * t * sin(o*3.14159265/180)) - 0.5 * 9.81 * pow(t,2);
    if(h2 - 1 > y && y > h1 + 1) r[i] = "Safe";
    else r[i] = "Not Safe";
  }
  for(auto a: r){
    cout<< a << endl;
  }
}
