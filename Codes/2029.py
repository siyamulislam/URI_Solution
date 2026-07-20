PI = 3.14

while True:
    try:
        V = float(input())
        D = float(input())

        r = D / 2
        area = PI * r * r
        height = V / area

        print(f"ALTURA = {height:.2f}")
        print(f"AREA = {area:.2f}")

    except EOFError:
        break
