# https://open.kattis.com/problems/zamka
LDX = [int(raw_input()) for x in xrange(3)]
result = filter(lambda x: sum(map(int, list(str(x)))) == LDX[2],xrange(LDX[0], LDX[1]+1))
print min(result)
print max(result)
