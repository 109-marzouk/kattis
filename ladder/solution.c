// https://open.kattis.com/problems/ladder
#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main() {
    int h, a;
    scanf("%d %d", &h, &a);
    printf("%ld\n", (long int) ceil(h/sin(a*(3.14159265/180.0))));
    return 0;
}
