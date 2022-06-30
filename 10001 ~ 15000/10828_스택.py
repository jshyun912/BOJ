import sys

N = int(input())
a = []
size = 0

for i in range(N):
    order = str(sys.stdin.readline())

    if order[:4] == "push":
        a.append(int(order[5:]))
        size += 1

    elif order[:3] == "pop":
        if size == 0:
            print(-1)
        else:
            print(a.pop())
            size -= 1

    elif order[0] == 's':
        print(size)

    elif order[0] == 'e':
        if (size == 0):
            print(1)
        else:
            print(0)

    else:
        if size == 0:
            print(-1)
        else:
            print(a[-1])