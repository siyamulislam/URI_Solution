def wins(a, b):
    return (
        (a == "papel" and b == "pedra") or
        (a == "pedra" and b == "tesoura") or
        (a == "tesoura" and b == "papel")
    )


while True:
    try:
        dodo, leo, pepper = input().split()
    except EOFError:
        break

    if leo == pepper and dodo != leo and wins(dodo, leo):
        print("Os atributos dos monstros vao ser inteligencia, sabedoria...")

    elif dodo == pepper and leo != dodo and wins(leo, dodo):
        print("Iron Maiden's gonna get you, no matter how far!")

    elif dodo == leo and pepper != dodo and wins(pepper, dodo):
        print("Urano perdeu algo muito precioso...")

    else:
        print("Putz vei, o Leo ta demorando muito pra jogar...")
