import sys

N = int(sys.stdin.readline())

num = []
NGE = []
ans = []

num = list(map(int,sys.stdin.readline().split()))

for i in range(N-1, -1, -1):
    while len(NGE) != 0:
        if NGE[-1] <= num[i]:
            NGE.pop()
        else:
            break

    if len(NGE) == 0:
        ans.append(-1)
    else:
        ans.append(NGE[-1])

    NGE.append(num[i])
    
for i in range(N-1, -1, -1):
    print(ans[i], end = ' ')