while True:
    t = int(input())

    if t == 0:
        break

    for _ in range(t):
        n = int(input())

        if n % 2:
            print(2 * n - 1)
        else:
            print(2 * n - 2)
