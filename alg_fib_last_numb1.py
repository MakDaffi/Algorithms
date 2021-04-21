def fib1(n, m):
    a = [0, 1]
    b = -1
    for i in range(2, n + 1):
        a.append((a[i-1] + a[i-2]) % m)
        if (a[i] == a[1]) & (a[i-1] == a[0]):
            b = a[n % (len(a) - 2)]
            break
    if b== -1:
        print(a[n])
    else: print(b)


if __name__ == '__main__':
    n, m = map(int, input().split())
    fib1(n, m)