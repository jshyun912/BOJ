import sys

K = int(sys.stdin.readline())
book = []
ans = 0

for i in range(K):
    A = int(sys.stdin.readline())
    if A == 0:
        book.pop()

    else:
        book.append(A)


while len(book) != 0:
     ans += book.pop()

print(ans)