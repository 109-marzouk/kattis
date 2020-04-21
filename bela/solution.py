# https://open.kattis.com/problems/bela
s = raw_input().split(" "); print sum(map(lambda l: {"J": 20, "9": 14}[l[0]] if (l[1] == s[1] and l[0] in list("J9")) else {"A": 11, "K": 4, "Q": 3, "J": 2, "T": 10, "9": 0, "8": 0, "7": 0}[l[0]], [list(raw_input()) for _ in xrange(4*int(s[0]))]))
