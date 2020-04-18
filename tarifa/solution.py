# https://open.kattis.com/problems/tarifa
x = int(raw_input()); n = int(raw_input())
print (x * (n + 1)) - (sum([int(raw_input()) for _ in xrange(n)]))
