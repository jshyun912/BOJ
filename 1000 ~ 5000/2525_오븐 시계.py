A, B = map(int, input().split())
C = int(input())

B += C

if (B >= 60):
    while B >= 60:
        B -= 60
        A += 1

if (A >= 24):
    A -= 24

print(A, B)