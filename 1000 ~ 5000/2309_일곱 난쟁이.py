a = []
sum = 0

for i in range(9):
    a.append(int(input()))
    sum += a[i]

a = sorted(a)
i = 0

while i < 9:
    sum -= a[i]
    j = 0

    while j < 9:
        if i != j and sum - a[j] == 100:
            break
        j += 1

    if j < 9:
        break

    sum += a[i]
    i += 1

for k in range(9):
    if k != i and k != j:
        print(a[k])