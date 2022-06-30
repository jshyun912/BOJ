import sys

string = str(sys.stdin.readline().strip())
bomb = str(sys.stdin.readline().strip())

bomb = list(bomb)
bomb.reverse()

ans = []

for i in range(len(string)-1, -1, -1):
    ans.append(string[i])

    if len(ans) >= len(bomb):
        while len(ans) != 0:
            if ans[-1*len(bomb):] == bomb:
                for j in range(len(bomb)):
                    ans.pop()
            else:
                break

if len(ans) == 0:
    print("FRULA")

else:
    for i in range(len(ans)-1, -1, -1):
        print(ans[i], end = '')