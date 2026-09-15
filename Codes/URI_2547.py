while True:
    try:
        n, amin, amax = map(int, input().split())
    except EOFError:
        break

    count = 0

    for _ in range(n):
        height = int(input())

        if amin <= height <= amax:
            count += 1

    print(count)
