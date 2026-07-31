bills = [2, 5, 10, 20, 50, 100]

while True:
    N, M = map(int, input().split())

    if N == 0 and M == 0:
        break

    change = M - N

    possible = False

    for i in range(6):
        for j in range(i + 1, 6):
            if bills[i] + bills[j] == change:
                possible = True

    print("possible" if possible else "impossible")
