import sys

a, b, c = map(int,sys.stdin.readline().split())
a *= b

print(a//c, end = '')

if a % c != 0:
    print('.', end = '')

    for i in range(1000):
        a = (a % c) * 10
        print(a // c, end = '')
        if a % c == 0:
            break