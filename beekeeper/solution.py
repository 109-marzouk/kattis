# https://open.kattis.com/problems/beekeeper
while True:
  n = input()
  if n == 0: break
  d = {}
  for x in xrange(n):
    s = raw_input()
    r = 0
    for e in "aeiouy": r += s.count(e*2)
    d[r] = s
  print d[max(d.keys())]
