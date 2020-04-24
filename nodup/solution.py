# https://open.kattis.com/problems/nodup
s = raw_input().split()
i = True
for w in s:
  if s.count(w) > 1: i = False; break
print "yes" if i else "no"
