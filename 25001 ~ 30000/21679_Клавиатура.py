import sys

n = int(sys.stdin.readline())
c = list(map(int, sys.stdin.readline().split()))
k = int(sys.stdin.readline())
p = list(map(int, sys.stdin.readline().split()))

for i in range(k):
    c[p[i]-1] -= 1

for i in range(n):
    if c[i] < 0:
        print("yes")
    else:
        print("no")