p, j1, j2, r, a = map(int, input().split())

if r == 1:
    if a == 1:
        print("Jogador 2 ganha!")
    else:
        print("Jogador 1 ganha!")
else:
    if a == 1:
        print("Jogador 1 ganha!")
    else:
        even = (j1 + j2) % 2 == 0

        if (even and p == 1) or (not even and p == 0):
            print("Jogador 1 ganha!")
        else:
            print("Jogador 2 ganha!")
