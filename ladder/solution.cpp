// https://open.kattis.com/problems/ladder
#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int a, b;
  cin>> a >> b;
  cout<< ceil(a/sin(b*(3.14159265/180))) << endl;
}
