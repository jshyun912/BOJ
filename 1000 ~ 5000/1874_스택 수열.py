import sys

N = int(input())
a = []
b = []
c = []
j = 1
size = 0

for i in range(N):
    a.append(int(sys.stdin.readline()))

i = 0

while i < N:
    if len(b) == 0:
        b.append(j)
        c.append('+')
        j += 1

    while b[-1] < a[i]:
        b.append(j)
        c.append('+')
        j += 1

    while b[-1] > a[i] and b[-1] <= N:
        b.pop()
        c.append('-')

    if b[-1] != a[i]:
        break

    b.pop()
    c.append('-')

    i += 1


if i == N:
    for i in range (len(c)):
        print(c[i])

else:
    print("NO")