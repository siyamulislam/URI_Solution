case = 1

while True:
    try:
        n = int(input())

        total = 1 + n * (n + 1) // 2

        if total == 1:
            print(f"Caso {case}: {total} numero")
        else:
            print(f"Caso {case}: {total} numeros")

        seq = ["0"]

        for i in range(1, n + 1):
            seq.extend([str(i)] * i)

        print(" ".join(seq))
        print()

        case += 1

    except EOFError:
        break
