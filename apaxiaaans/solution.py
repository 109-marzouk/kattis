# https://open.kattis.com/problems/apaxiaaans
i = input()
r = i[0]
for e in list(i):
  if e != r[-1]: r += e
print(r)
