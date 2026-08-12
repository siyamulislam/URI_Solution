n = int(input())

camera = []

for _ in range(n + 1):
    camera.append(list(map(int, input().split())))

for i in range(n):
    result = ""

    for j in range(n):
        total = (
            camera[i][j] +
            camera[i][j + 1] +
            camera[i + 1][j] +
            camera[i + 1][j + 1]
        )

        if total >= 2:
            result += "S"
        else:
            result += "U"

    print(result)
