// https://open.kattis.com/problems/isithalloween
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  string x;
  getline(cin, x);
  if(x == "OCT 31" || x == "DEC 25") cout << "yup" << endl;
  else cout << "nope" << endl;
}
