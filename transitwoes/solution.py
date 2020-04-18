STN = map(int, raw_input().split())
Di = map(int, raw_input().split())
z = Di[0]
Bi = map(int, raw_input().split()) + [0]
Ci = map(int, raw_input().split()) + [0]
for x in xrange(STN[2]):
  if Di[x] > Ci[x] + Di[x]: z += (2 * Ci[x] - Di[x] + Di[x+1])
  else: z += (Ci[x] + Di[x+1])
  if z > STN[1]: print "no"; break
if z <= STN[1]: print "yes"
