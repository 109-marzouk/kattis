# https://open.kattis.com/problems/bijele
x = [1,1,2,2,2,8]
y = list(map(int, raw_input().split(" ")))
print(" ".join([str(-(y[i]-x[i])) for i in range(6)]))
