# https://open.kattis.com/problems/oddmanout
for x in xrange(1, input()+1):
  n= input()
  s = map(int, raw_input().split(" "))
  for e in s:
    if s.count(e) == 1: print "Case #" + str(x) + ": " + str(e); break;
