A = str(input())
size = len(A)
how = 1
X = 0

if size == 1:
    how = 0

for i in range(size):
    X += int(A[i])

sum = X

while X >= 10:
    sum = 0
    while X > 0:
        sum += (X % 10)
        X //= 10

    how += 1

    if(sum >= 10):
        X = sum

print(how)

if sum % 3 == 0:
    print("YES")

else:
    print("NO")