N = int(input())
A, B = map(int, input().split())

max = A // 2 + B

if max < N:
    print(max)

else:
    print(N)