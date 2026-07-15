n = int(input())

for _ in range(n):
    t = int(input())

    if t < 2015:
        print(2015 - t, "D.C.")
    else:
        print(t - 2015 + 1, "A.C.")
