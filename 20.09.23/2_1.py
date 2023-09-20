n = int(input())
m = int(input())

if (n % 2 == 1 or m % 2 == 1):
    print(1 + abs(n - m))
else:
    print(2 * (2 + abs(m - n)))
