import sys

T = int(sys.stdin.readline().strip())

for i in range(T):
    a = int(sys.stdin.readline().strip())
    c = a

    print(a)
    while a >= 100:
        b = a % 10
        a = a // 10
        a -= b
        print(a)

    if a % 11 == 0:
        print("The number " + str(c) + " is divisible by 11.")
    else:
        print("The number " + str(c) + " is not divisible by 11.")
        
    print()