while True:
    try:
        n = int(input())
    except EOFError:
        break

    max_speed = -1

    for day in range(1, n + 1):
        t, d = map(int, input().split())

        speed = d / t

        if speed > max_speed:
            print(day)
            max_speed = speed
