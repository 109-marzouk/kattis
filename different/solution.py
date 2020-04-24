# https://open.kattis.com/problems/different
s = raw_input()
while s is not None:
    n = list(map(int, s.split(" ")));
    print abs(n[0]-n[1])
    try: s = raw_input()
    except: break
