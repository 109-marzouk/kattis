# https://open.kattis.com/problems/sibice
from math import sqrt
n, w, h = map(int, raw_input().split(" "))
f = lambda x: "DA" if x <= sqrt(w**2 + h**2) else "NE"
for z in [f(int(raw_input())) for _ in xrange(n)]: print z
