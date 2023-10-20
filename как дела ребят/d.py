from itertools import product


def main():

    n = input()
    x = input()
    y = input()

    int_n = int(n)

    if int(n) < min(int(x), int(y)):
        res = -1

    elif x == y:
        if x == 0:
            res = -1
        else:
            res = len(n) - 1 + int(x * len(n)) < int(n)

    elif x == '0' or y == '0':
        nonzero = x if x != '0' else y
        res = 2 ** (len(n) - 2)
        for s in product((x + y), repeat=(len(n) - 1)):
            if int(nonzero+''.join(s)) <= int_n:
                res += 1

    else:
        res = 2 ** (len(n) - 1)
        for s in product((x + y), repeat=len(n)):
            if int(''.join(s)) <= int_n:
                res += 1

    if res == 0:
        res = -1
    print(res)


if __name__ == '__main__':
    main()
