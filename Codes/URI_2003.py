while True:
    try:
        h, m = map(int, input().split(":"))

        wake = h * 60 + m
        arrival = wake + 60
        delay = max(0, arrival - 8 * 60)

        print(f"Atraso maximo: {delay}")

    except EOFError:
        break
