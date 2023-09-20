n = int(input())
m = int(input())

if (1 + n) * n < m:
    print(0)
else:
    while m > 0:
        if n < m:
            print(n)
        else:
            print(m)
        m -= n
