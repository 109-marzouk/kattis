# https://open.kattis.com/problems/qaly
print sum(map(lambda y: float(y[0]) * float(y[1]),[raw_input().split(" ") for _ in xrange(int(raw_input()))]))
