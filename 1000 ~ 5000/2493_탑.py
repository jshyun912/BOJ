import sys

N = int(sys.stdin.readline())
tower = []
big = []
num = []
ans = []

tower = list(map(int, sys.stdin.readline().split()))

for i in range(N):
    while len(big) != 0:
        if big[-1] <= tower[i]:
            num.pop()
            big.pop()
        else:
            break

    if len(big) == 0:
        ans.append(0)

    else:
        ans.append(num[-1])

    big.append(tower[i])
    num.append(i+1)

for i in range(N):
    print(ans[i], end = ' ')