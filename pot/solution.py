# https://open.kattis.com/problems/pot
print sum(map(lambda x: int(x[:len(x)-1]) ** int(x[-1]), [raw_input() for _ in xrange(int(raw_input()))]))
