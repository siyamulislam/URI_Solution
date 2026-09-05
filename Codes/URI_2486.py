vitamin_c = {
    "suco de laranja": 120,
    "morango fresco": 85,
    "mamao": 85,
    "goiaba vermelha": 70,
    "manga": 56,
    "laranja": 50,
    "brocolis": 34
}

while True:
    T = int(input())

    if T == 0:
        break

    total = 0

    for _ in range(T):
        n, food = input().split(maxsplit=1)
        total += int(n) * vitamin_c[food]

    if total > 130:
        print(f"Menos {total - 130} mg")
    elif total < 110:
        print(f"Mais {110 - total} mg")
    else:
        print(f"{total} mg")
