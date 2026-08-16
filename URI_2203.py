import math

while True:
    try:
        Xf, Yf, Xi, Yi, Vi, R1, R2 = map(int, input().split())

        distance = math.sqrt(
            (Xi - Xf) ** 2 +
            (Yi - Yf) ** 2
        )

        if distance + Vi * 1.5 <= R1 + R2:
            print("Y")
        else:
            print("N")

    except EOFError:
        break
