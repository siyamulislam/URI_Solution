import sys

input = sys.stdin.readline

while True:
    line = input()

    if not line:
        break

    n = int(line)

    m, l = map(int, input().split())

    # Marcos-এর cards
    marcos = []

    for _ in range(m):
        marcos.append(list(map(int, input().split())))

    # Leonardo-এর cards
    leonardo = []

    for _ in range(l):
        leonardo.append(list(map(int, input().split())))

    # নির্বাচিত card
    cm, cl = map(int, input().split())

    # নির্বাচিত attribute
    a = int(input())

    # Python index 0 থেকে শুরু হয়
    marcos_value = marcos[cm - 1][a - 1]
    leonardo_value = leonardo[cl - 1][a - 1]

    if marcos_value > leonardo_value:
        print("Marcos")
    elif marcos_value < leonardo_value:
        print("Leonardo")
    else:
        print("Empate")
