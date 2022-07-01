import sys

def pow(num, exp, div):
    if exp == 0:
        return 1

    temp = pow(num, exp // 2, div)

    if (exp % 2 == 0):
        return (temp * temp) % div

    else:
        return ((temp * temp) % div) * (num % div) % div

def prime_check(a):
    if a == 1:
        return False
    i = 2

    while i * i <= a:
        if a % i == 0:
            return False
        else:
            i += 1

    return True

while True:
    p, a = map(int, sys.stdin.readline().split())

    if a == 0:
        break
    
    if prime_check(p) == True:
        print("no")
        continue

    if pow(a, p, p) == a:
        print("yes")

    else:
        print("no")