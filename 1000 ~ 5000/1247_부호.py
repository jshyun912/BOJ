for i in range(3):
    A = int(input())
    C = 0

    while A > 0:
        B = int(input())
        C += B
        A -= 1

    if C == 0:
        print(0)

    elif C > 0:
        print('+')

    else:
        print('-')