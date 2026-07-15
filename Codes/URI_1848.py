total = 0
results = 0

while results < 3:
    s = input()

    if s == "caw caw":
        print(total)
        total = 0
        results += 1
    else:
        value = 0

        if s[0] == "*":
            value += 4
        if s[1] == "*":
            value += 2
        if s[2] == "*":
            value += 1

        total += value
