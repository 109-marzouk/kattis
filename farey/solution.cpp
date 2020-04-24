// https://open.kattis.com/problems/farey
#include <iostream>
int f(int n){
  int my_sum = 0;
  for(int k = 2; k < n + 1; k++) my_sum += f(n / k);
  return (n * (n + 3)) / 2 - my_sum;
}
int main() {
  int n;
  std::cin>> n;
  for(int i = 0; i < n; i++){
    int k, num;
    std::cin>> k >> num;
    std::cout<< k << " " << f(num) <<std::endl;
  }
  return 0;
}
