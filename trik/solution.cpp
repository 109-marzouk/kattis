// https://open.kattis.com/problems/trik
#include <iostream>
using namespace std;
int main() {
  string inp;
  cin>> inp;
  int a = 1, b = 0, c = 0, t;
  for(int i = 0; i < inp.length(); i++)
  {
    if(inp[i] == 'A'){
      t = a;
      a = b;
      b = t;
    }
    else if(inp[i] == 'B'){
      t = b;
      b = c;
      c = t;
    }
    else
    {
      t = a;
      a = c;
      c = t;
    }
  }
  if(a == 1) cout<< 1 << endl;
  if(b == 1) cout<< 2 << endl;
  if(c == 1) cout<< 3 << endl;
}
