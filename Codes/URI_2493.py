import sys

input = sys.stdin.readline

while True:
    line = input().strip()

    if not line:
        break

    T = int(line)

    expressions = []

    for _ in range(T):
        x, rest = input().split()
        y, z = rest.split("=")

        x = int(x)
        y = int(y)
        z = int(z)

        expressions.append((x, y, z))

    wrong = []

    for _ in range(T):
        name, e, answer = input().split()

        e = int(e) - 1
        x, y, z = expressions[e]

        correct = False

        if answer == "+" and x + y == z:
            correct = True
        elif answer == "-" and x - y == z:
            correct = True
        elif answer == "*" and x * y == z:
            correct = True
        elif answer == "I":
            if x + y != z and x - y != z and x * y != z:
                correct = True

        if not correct:
            wrong.append(name)

    if len(wrong) == 0:
        print("You Shall All Pass!")
    elif len(wrong) == T:
        print("None Shall Pass!")
    else:
        wrong.sort()
        print(" ".join(wrong))
