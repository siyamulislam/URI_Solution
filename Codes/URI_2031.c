n = int(input())

for _ in range(n):
    p1 = input().strip()
    p2 = input().strip()

    if p1 == "ataque" and p2 == "ataque":
        print("Aniquilacao mutua")

    elif p1 == "pedra" and p2 == "pedra":
        print("Sem ganhador")

    elif p1 == "papel" and p2 == "papel":
        print("Ambos venceram")

    elif p1 == "ataque":
        print("Jogador 1 venceu")

    elif p2 == "ataque":
        print("Jogador 2 venceu")

    elif p1 == "pedra":
        print("Jogador 1 venceu")

    else:
        print("Jogador 2 venceu")
