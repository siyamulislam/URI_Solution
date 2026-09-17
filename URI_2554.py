while True:
    try:
        n, d = map(int, input().split())
    except EOFError:
        break

    answer = None

    for _ in range(d):
        data = input().split()

        date = data[0]
        people = list(map(int, data[1:]))

        if answer is None and all(people):
            answer = date

    if answer:
        print(answer)
    else:
        print("Pizza antes de FdI")
