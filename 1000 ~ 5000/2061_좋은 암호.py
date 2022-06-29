P, K = map(int, input().split())
A = 2
while(A < K):
    if P % A == 0:
        break
    A += 1

if A == K:
    print("GOOD")

else:
    print("BAD", A)