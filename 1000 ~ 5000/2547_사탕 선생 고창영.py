T = int(input())

for i in range(T):
    input()
    N = int(input())

    candy = 0

    for j in range(N):
        candy += int(input())

    if candy % N == 0:
        print("YES")

    else:
        print("NO")