# https://open.kattis.com/problems/batterup
n = raw_input()
a = filter(lambda x: x >= 0, map(int, raw_input().split(" ")))
print sum(a) / float(len(a))
