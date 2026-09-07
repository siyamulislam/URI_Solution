t = int(input())

for _ in range(t):
    b = int(input())

    a1, d1, l1 = map(int, input().split())
    a2, d2, l2 = map(int, input().split())

    dabriel = a1 + d1
    guarte = a2 + d2

    if l1 % 2 == 0:
        dabriel += b * 2

    if l2 % 2 == 0:
        guarte += b * 2

    if dabriel > guarte:
        print("Dabriel")
    elif guarte > dabriel:
        print("Guarte")
    else:
        print("Empate")
