while True:
    N = int(input())

    if N == 0:
        break

    while True:
        sum = 0

        while N >= 10:
            sum += (N % 10)
            N //= 10

        sum += N

        if sum >= 10:
            N = sum

        else:
            break

    print(sum)