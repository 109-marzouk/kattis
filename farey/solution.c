#include <stdio.h>
#include <assert.h>

int f(int n){
  int my_sum = 0;
  for(int k = 2; k < n + 1; k++) my_sum += f(n / k);
  return (n * (n + 3)) / 2 - my_sum;
}
int main(void) {
  int n, x;
  assert(scanf("%d", &n) > 0);
  for(int i = 0; i < n; i++){
    int k, num;
    assert(scanf("%d %d", &k, &num) > 0);
    x = f(num);
    printf("%d %d\n", k, x);
  }
  return 0;
}
