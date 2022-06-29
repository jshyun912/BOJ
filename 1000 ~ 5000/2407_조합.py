n, m = map(int,input().split())
if m < n - m:
    a = m

else:
    a = n - m;

up = 1
down = 1
m = a

for i in range(a):
    up *= n
    n -= 1

for i in range(m):
    down *= a
    a -= 1

print(up // down)