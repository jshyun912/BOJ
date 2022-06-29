A = int(input())
B = int(input())

if A % 2 == 1:
    B -= 1

C = A//2 - B//2
A = A - C

print(A)
print(C)