// https://open.kattis.com/problems/hissingmicrophone
#include <iostream>
using namespace std;

int main() {
  string x;
  getline(cin, x);
  if(x.find("ss") < x.length()) cout<< "hiss" << endl;
  else cout<< "no hiss" << endl;
}
