for e in [map(int, raw_input().split(" ")) for x in xrange(int(raw_input()))]:
  r = "advertise" if e[1] - e[0] > e[2] else "does not matter" if e[1] - e[0] == e[2] else "do not advertise"
  print r
