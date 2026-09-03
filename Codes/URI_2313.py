a, b, c = map(int, input().split())

# Sort so that c is the largest side
a, b, c = sorted([a, b, c])

# Triangle validity
if a + b <= c:
    print("Invalido")
else:
    # Triangle type
    if a == b == c:
        print("Valido-Equilatero")
    elif a == b or b == c or a == c:
        print("Valido-Isoceles")
    else:
        print("Valido-Escaleno")

    # Right triangle
    if a * a + b * b == c * c:
        print("Retangulo: S")
    else:
        print("Retangulo: N")
